#include "UiSystem.h"

void UiSystem::menuUI() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Main Menu " << "\n";
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "[1] Report a incident " << "\n";
	std::cout << "[2] View reported incidents " << "\n";
	std::cout << "[3] Assign incident to a technician " << "\n";

	std::cout << "[4] Change incident priority " << "\n";
	std::cout << "[5] Add comments / notes " << "\n";
	std::cout << "[6] Resolve an incident " << "\n";

	std::cout << "[7] Reopen a resolved incident " << "\n";
	std::cout << "[8] Delete/archive an incident " << "\n";

}

void UiSystem::printRecord(const int id) //Will take in a record ID
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	//loop that finds the record ID in the list (maybe hashmap soon)

}

void UiSystem::viewRecord() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	//loop that prints all the incident info in list
}


// Selection routines

void UiSystem::reportUI() const
{

	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Incident Report " << "\n";
	std::cout << "------------------------------------------- " << "\n";
	//std::cout << " " << "\n";
	std::cout << "[1] Begin Report " << "\n";
	std::cout << "[2] Go Back " << "\n";



}


void UiSystem::assignTech() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Assign Technician " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::priorityChange() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Change priority " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::commentAdd() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Add Comments " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::resolveReport() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Resolve Incident " << "\n";
	std::cout << "[2] Go Back " << "\n";


}



void UiSystem::reopenReport() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Reopen a resolved incident " << "\n";
	std::cout << "[2] Go Back " << "\n";


}



void UiSystem::deleteRecord() const
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Delete a record " << "\n";
	std::cout << "[2] Archive a record " << "\n";
	std::cout << "[3] Go Back" << "\n";


}

//----------------------------------------------------------------//

// Confirmation UI 

void UiSystem::reportConfirm(const IncidentRecord& record) //IncidentCreated
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Incident confirmed! " << "\n";
	std::cout << "Information overview: " << "\n";
	//make an overloaded function for printing records



}

void UiSystem::confirmTech(const IncidentRecord& record) const //TechnicianAssigned
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Technician assigned to record # " << record.id << "\n";

}

void UiSystem::priorityConfirm(const IncidentRecord& record) const //PriorityChanged
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "record # " << record.id << "priority changed to " << static_cast<int>(record.priority) << "\n";



}

void UiSystem::commentConfirm(const IncidentRecord& record) const //CommentAdded
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Comment Added to incident # " << record.id << "\n";


}

void UiSystem::resolveConfirm(const IncidentRecord& record) const //ResolvedIncident
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "Incident # " << record.id << "resolved" << "\n";


}

void UiSystem::reopenConfirm(const IncidentRecord& record) const //ReOpenIncident
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been reopened" << "\n";


}

void UiSystem::deleteConfirm(const IncidentRecord& record) const //IncidentDeleted
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been deleted" << "\n";


}

void UiSystem::archiveConfirm(const IncidentRecord& record) const //IncidentArchived
{
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "incident # " << record.id << " has been archived" << "\n";


}