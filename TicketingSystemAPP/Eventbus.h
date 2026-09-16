#pragma once
#include <vector>
#include <iostream>
#include <functional>
#include <Data.h>
#include <NotificationSystem.h>
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

class EventBus
{
public:
	void publish(const DispatchRecord& record);
	void createdEventStore(std::function<void(const IncidentRecord&)> func);
	void assignedEventStore(std::function<void(const IncidentRecord&)> func);
	void resolvedEventStore(std::function<void(const IncidentRecord&)> func);
	void reopenedEventStore(std::function<void(const IncidentRecord&)> func);
	void priorityChangeEventStore(std::function<void(const IncidentRecord&)> func);
	void commentAddedEventStore(std::function<void(const IncidentRecord&)> func);
	void archivedEventStore(std::function<void(const IncidentRecord&)> func);
	void process();

	
private:
	std::vector<std::function<void(const IncidentRecord&)>> incidentCreatedList;
	//incidentCreatedList functions - UI (reportConfirm), Manager (addIncident), StatsSystem, Audit (reportConfirm)
	std::vector<std::function<void(const IncidentRecord&)>> incidentAssignedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentResolvedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentReopenedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentPriorityChangeList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentCommentChangedList;
	std::vector<std::function<void(const IncidentRecord&)>> incidentArchivedList;
	std::vector<DispatchRecord>dispatchedRecords;
};

