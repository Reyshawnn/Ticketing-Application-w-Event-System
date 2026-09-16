#pragma once
#include<string>
/*

Incident ID
-IncidentID will have to be unique
-im thinking we have a incident counter and we simply give the ID the current counter number and increment

Title

Description

Reporter

Assigned technician
-keep

Priority

Status

Creation time

Last updated time

*/

// --Record contains these members ^^--


struct Technician
{
	std::string_view name;
	int incidents;
	int resolvedIncidents;
	bool available{ true };

};

enum class Event
{
	IncidentCreatedEvent,
	IncidentAssignedEvent,
	IncidentResolvedEvent,
	IncidentReopenedEvent,
	IncidentPriorityChangedEvent,
	IncidentCommentAdded,
	IncidentArchived,

};

enum class Priority 
{
	Low,
	medium,
	high,
};

enum class Status
{
	Unassigned,
	Assigned,
	Resolved,
	Archived,
};

struct IncidentRecord 
{
	int id{};
	std::string_view title;
	std::string_view description;
	std::string_view reporter;
	Technician tech;
	Priority priority;
	Status status;
	std::string_view createTime;
	std::string updatedTime;
	std::string comment;
};

struct DispatchRecord
{
	Event event;
	IncidentRecord record;
};
