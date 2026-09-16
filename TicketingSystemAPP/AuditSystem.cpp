#include "AuditSystem.h"

void AuditSystem::reportConfirm(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Incident " };
	std::string basicString2{ " confirmed " };
	basicString.append(std::to_string(id));
	basicString.append(basicString2);
	data.push_back(basicString);
}

void AuditSystem::confirmTech(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Technician assigned to incident # " };
	basicString.append(std::to_string(id));
	data.push_back(basicString);


}

void AuditSystem::priorityConfirm(const IncidentRecord& record)
{
	std::string basicString{ "Incident # " };
	basicString.append(std::to_string(record.id));

	std::string basicString2{ " priority changed to " };
	//basicString2.append(record.priority);

	basicString.append(basicString2);

	data.push_back(basicString);




}

void AuditSystem::commentConfirm(const IncidentRecord& record) //could probably change this to int 
{
	std::string basicString{ "Comment added to incident # " };
	basicString.append(std::to_string(record.id));
	data.push_back(basicString);


}

void AuditSystem::resolveConfirm(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Incident #  " };
	std::string basicString2{ " resolved " };
	basicString.append(std::to_string(id));
	basicString.append(basicString2);
	data.push_back(basicString);


}

void AuditSystem::reopenConfirm(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Incident #  " };
	std::string basicString2{ " reopened " };
	basicString.append(std::to_string(id));
	basicString.append(basicString2);
	data.push_back(basicString);


}

void AuditSystem::deleteConfirm(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Incident #  " };
	std::string basicString2{ " deleted " };
	basicString.append(std::to_string(id));
	basicString.append(basicString2);
	data.push_back(basicString);


}

void AuditSystem::archiveConfirm(const IncidentRecord& record)
{
	int id{ record.id };
	std::string basicString{ "Incident #  " };
	std::string basicString2{ " archived " };
	basicString.append(std::to_string(id));
	basicString.append(basicString2);
	data.push_back(basicString);


}
