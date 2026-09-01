#include "NotificationSystem.h"
void NotificationSystem::reportConfirm(const IncidentRecord& record) //Maybe take in a incident record and show information
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Incident confirmed! " << "\n";
	std::cout << "Information overview: " << "\n";
	//make an overloaded function for printing records



}

void NotificationSystem::confirmTech(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Technician assigned to record # " << record.id << "\n";

}

void NotificationSystem::priorityConfirm(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "record # " << record.id << "priority changed to " << record.priority << "\n";



}

void NotificationSystem::commentConfirm(const IncidentRecord& record) const //could probably change this to int 
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Comment Added to incident # " << record.id << "\n";


}

void NotificationSystem::resolveConfirm(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Incident # " << record.id << "resolved" << "\n";


}

void NotificationSystem::reopenConfirm(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been reopened" << "\n";


}

void NotificationSystem::deleteConfirm(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been deleted" << "\n";


}

void NotificationSystem::archiveConfirm(const IncidentRecord& record) const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been archived" << "\n";


}