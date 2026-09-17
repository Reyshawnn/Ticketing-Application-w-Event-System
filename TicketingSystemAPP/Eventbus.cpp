#include "Eventbus.h"

//enum class Event
//{
//	IncidentCreatedEvent,
//	IncidentAssignedEvent,
//	IncidentResolvedEvent,
//	IncidentReopenedEvent,
//	IncidentPriorityChangedEvent,
//	IncidentCommentAdded,
//	IncidentArchived,
//
//};

void EventBus::publish(const DispatchRecord& record)
{
	dispatchedRecords.push_back(record);
}

void EventBus::createdEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentCreatedList.push_back(func);
}

void EventBus::assignedEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentAssignedList.push_back(func);
}

void EventBus::resolvedEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentResolvedList.push_back(func);
}

void EventBus::reopenedEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentReopenedList.push_back(func);
}
void EventBus::priorityChangeEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentPriorityChangeList.push_back(func);
}
void EventBus::commentAddedEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentCommentChangedList.push_back(func);
}
void EventBus::archivedEventStore(std::function<void(const IncidentRecord&)> func)
{

	incidentArchivedList.push_back(func);
}

void EventBus::viewEventStore(std::function<void(const IncidentRecord&)> func)
{
	incidentViewList.push_back(func);
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

		case Event::IncidentViewEvent:{

			for (auto& func : incidentViewList)
			{
				func(disRec.record);
			}
			break;
		}




		}
	}
}
