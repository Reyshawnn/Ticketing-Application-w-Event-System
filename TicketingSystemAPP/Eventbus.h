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
	void createdEventStore(std::function<void(const IncidentRecord&)> func);
	void process();

	
private:
	std::vector<std::function<void(const IncidentRecord&)>> incidentCreatedList;
	//incidentCreatedList functions - UI (reportConfirm), Manager (addIncident), StatsSystem
	std::vector<std::function<void(const IncidentRecord&)>> incidentAssignedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentResolvedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentReopenedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentPriorityChangeList;
	std::vector<DispatchRecord>dispatchedRecords;
};

