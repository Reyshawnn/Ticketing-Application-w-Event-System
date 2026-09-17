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

void UiSystem::printRecord(const IncidentRecord& record) //Will take in a record ID
{
	std::system("cls");
	std::cout << "<-------- Incident Record -------->" << "\n";
	std::cout << "ID: " << record.id << "\n";
	std::cout << "Name: " << record.reporter << "\n";
	std::cout << "Priority: " << static_cast<int>(record.priority) << "\n";
	std::cout << "Time: " << record.createTime << "\n";

	//loop that finds the record ID in the list (maybe hashmap soon)

}




// Selection routines

void UiSystem::reportUI() const
{
	std::system("cls");
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
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Assign Technician " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::priorityChange() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Change priority " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::commentAdd() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Add Comments " << "\n";
	std::cout << "[2] Go Back " << "\n";


}

void UiSystem::resolveReport() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Resolve Incident " << "\n";
	std::cout << "[2] Go Back " << "\n";


}



void UiSystem::reopenReport() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Reopen a resolved incident " << "\n";
	std::cout << "[2] Go Back " << "\n";


}



void UiSystem::deleteRecord() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] Delete a record " << "\n";
	std::cout << "[2] Archive a record " << "\n";
	std::cout << "[3] Go Back" << "\n";


}

void UiSystem::viewRecord() const
{
	std::system("cls");
	std::cout << "------------------------------------------- " << "\n";
	std::cout << "ZeroDay Inc. Incident Management System " << "\n";
	std::cout << "------------------------------------------- " << "\n";

	std::cout << "[1] View a record " << "\n";
	std::cout << "[2] Go Back" << "\n";


}

//----------------------------------------------------------------//

// Confirmation UI 

//-----------------------------------------------------------------//

void UiSystem::reportConfirm(const IncidentRecord& record) //IncidentCreated
{
	std::system("cls");

	std::cout << "Incident confirmed! " << "\n";
	std::cout << "Information overview: " << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	//make an overloaded function for printing records



}

void UiSystem::confirmTech(const IncidentRecord& record) const //TechnicianAssigned
{
	std::system("cls");

	std::cout << "Technician assigned to record # " << record.id << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

}

void UiSystem::priorityConfirm(const IncidentRecord& record) const //PriorityChanged
{
	std::system("cls");

	std::cout << "record # " << record.id << "priority changed to " << static_cast<int>(record.priority) << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";



}

void UiSystem::commentConfirm(const IncidentRecord& record) const //CommentAdded
{
	std::system("cls");

	std::cout << "Comment Added to incident # " << record.id << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";


}

void UiSystem::resolveConfirm(const IncidentRecord& record) const //ResolvedIncident
{
	std::system("cls");

	std::cout << "Incident # " << record.id << "resolved" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";


}

void UiSystem::reopenConfirm(const IncidentRecord& record) const //ReOpenIncident
{
	std::system("cls");

	std::cout << "incident # " << record.id << " has been reopened" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";


}

void UiSystem::deleteConfirm(const IncidentRecord& record) const //IncidentDeleted
{
	std::system("cls");

	std::cout << "incident # " << record.id << " has been deleted" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";


}

void UiSystem::archiveConfirm(const IncidentRecord& record) const //IncidentArchived
{
	std::system("cls");

	std::cout << "incident # " << record.id << " has been archived" << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";


}