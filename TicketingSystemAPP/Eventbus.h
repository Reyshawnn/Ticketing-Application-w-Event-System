#pragma once
#include <vector>
#include <iostream>
#include <functional>
#include <Data.h>
#include <NotificationSystem.h>
class EventBus
{
public:
	void publish(const DispatchRecord& record);
	void createdEventHandler(std::function<void(NotificationSystem*,const IncidentRecord&)>& func);

	
private:
	std::vector<std::function<void(const IncidentRecord&)>> incidentCreatedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentAssignedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentResolvedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentReopenedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentPriorityChangeList;
	std::vector<DispatchRecord>dispatchedRecords;
};

