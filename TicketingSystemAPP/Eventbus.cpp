#include "Eventbus.h"
void EventBus::publish(const DispatchRecord& record)
{
	dispatchedRecords.push_back(record);
}

void EventBus::createdEventHandler(std::function<void(NotificationSystem*,const IncidentRecord&)>& func)
{
	incidentCreatedList.push_back(func);
}