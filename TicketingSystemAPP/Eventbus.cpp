#include "Eventbus.h"
void EventBus::publish(const DispatchRecord& record)
{
	dispatchedRecords.push_back(record);
}

void EventBus::createdEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentCreatedList.push_back(func);
}

void EventBus::process()
{
	for (auto& disRec : dispatchedRecords)
	{
		switch (disRec.event)
		{

		case Event::IncidentCreatedEvent:{
		
			for (auto& func : incidentCreatedList)
			{
				func(disRec.record);
			}
			break;
		}

		case Event::IncidentAssignedEvent:{
		
			for (auto& func : incidentAssignedList)
			{
				func(disRec.record);
			}
			break;
		}

		case Event::IncidentResolvedEvent:{
		
			for (auto& func : incidentResolvedList)
			{
				func(disRec.record);
			}
			break;
		}

		case Event::IncidentReopenedEvent:{
		
			for (auto& func : incidentReopenedList)
			{
				func(disRec.record);
			}
			break;
		}

		case Event::IncidentPriorityChangedEvent:{
		
			for (auto& func : incidentPriorityChangeList)
			{
				func(disRec.record);
			}
			break;
		}


		}
	}
}
