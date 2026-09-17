#pragma once
#include <iostream>
#include <vector>
#include <Data.h>
#include <Eventbus.h>
#include <UiSystem.h>


/*
int id{};
	std::string_view title;
	std::string_view description;
	std::string_view reporter;
	Technician tech;
	std::string priority;
	std::string status;
	std::string_view createTime;
	std::string updatedTime;
	std::string comment;

*/

class IncidentManager
{
public:
	int x;

	DispatchRecord packageRecord(const IncidentRecord& record)
	{
		DispatchRecord dRec;
		dRec.record = record;
		return dRec;
	}

	void createRecord()
	{
		//this can be a loop that asks the user for the information that creates a incident record
		//will add to incident list

		std::system("cls");
		IncidentRecord record;
		std::string userInput;
		int userInputInt;

		std::cout << " Set the title of your incident " << "\n";
		std::cin >> userInput;

		record.title = userInput;
	
		std::system("cls");

		std::cout << " Set the description of your incident " << "\n";
		std::cin >> userInput;


		record.description = userInput;
		std::system("cls");
	


		std::cout << " enter in your name" << "\n";
		std::cin >> userInput;


		record.reporter = userInput;
		std::system("cls");
		
		


		std::cout << " enter in the priority of the incident: 1 = LOW, 2 = Medium, 3 = High " << "\n";
		std::cin >> userInputInt;


		record.priority = Priority{ userInputInt };
		std::system("cls");
		userInputInt = 0;


		std::cout << " enter in the time you are creating this HH:MM" << "\n";
		std::cin >> userInput;


		record.createTime = userInput;
		std::system("cls");
		;


		std::cout << " enter in any addional comments " << "\n";
		std::cin >> userInput;


		record.comment = userInput;
		std::system("cls");
		


		record.id = counter;
		counter++;

		record.status = Status::Unassigned;

		DispatchRecord dRec{ packageRecord(record) };
		dRec.event = Event::IncidentCreatedEvent;

		eventBus.publish(dRec);
		eventBus.process();

	}
	void archiveRecord(IncidentRecord& record)
	{
		//Will not modify anything will simply add the record to the archive

		incidentArchive.push_back(record);
		record.status = Status::Archived;

		DispatchRecord dRec{ packageRecord(record) };
		dRec.event = Event::IncidentArchived;
		eventBus.publish(dRec);
		eventBus.process();

	}

	//add all createdIncident functions
	void createdEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.createdEventStore(func);
	}

	void assignedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.assignedEventStore(func);
	}

	void priorityChangedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.priorityChangeEventStore(func);
	}

	void resolvedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.resolvedEventStore(func);
	}

	void reopenedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.reopenedEventStore(func);
	}

	void commentAddedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.commentAddedEventStore(func);
	}

	void archivedEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.archivedEventStore(func);
	}
	
	void viewEventHandlerInit(std::function<void(const IncidentRecord&)> func)
	{
		eventBus.viewEventStore(func);
	}

	void addIncident(const IncidentRecord& record) 
	{
		incidentList.push_back(record);
	}

	void assignTechnician()
	{
		if (!incidentList.empty())
		{
			for (auto& record : incidentList)
			{
				if (record.tech.available && recordAssigned != 3)
				{
					record.tech = techList.at(techCounter);
					recordAssigned++;
					record.status = Status::Assigned;

					DispatchRecord dRec{ packageRecord(record) };
					dRec.event = Event::IncidentAssignedEvent;
					eventBus.publish(dRec);
					eventBus.process();
				}
				else if (recordAssigned > 3)
				{
					techCounter++;
					recordAssigned = 0;
				}
			}
		}
	}

	void addComment()
	{
		int userInput;
		std::string userString;
		while (true)
		{
			std::system("cls");
			std::cout << "Enter a id number of the record you want to comment on ";
			std::cin >> userInput;
			for (auto& record : incidentList)
			{
				if (record.id == userInput)
				{
					std::cout << "Add the comment to this record " << "\n";
					std::cout << "--------------------------------" << "\n";
					std::cout << "Comment: ";
					std::cin >> userString;
					std::cout << "\n";
					DispatchRecord dRec{ packageRecord(record) };
					dRec.event = Event::IncidentCommentAdded;
					eventBus.publish(dRec);
					eventBus.process();

					break;
				}
			}
			break;

		}
		return;

	}

	void changePriority()
	{
		int userInput;
		while (true)
		{
			std::system("cls");
			std::cout << "Enter a id number of the record you want to change the priority of ";
			std::cin >> userInput;
			for (auto& record : incidentList)
			{
				if (record.id == userInput)
				{
					std::system("cls");
					std::cout << "Make the priority change here " << "\n";
					std::cout << "--------------------------------" << "\n";
					std::cout << "Priority LOW (0), MEDIUM (1), HIGH(2) : ";
					std::cin >> userInput;
					std::cout << "\n";
					record.priority = Priority{ userInput };

					DispatchRecord dRec{ packageRecord(record) };
					dRec.event = Event::IncidentPriorityChangedEvent;
					eventBus.publish(dRec);
					eventBus.process();
					break;
				}
			}
			break;

		}
		return;
	}

	void resolveIncident()
	{
		int userInput;
		while (true)
		{
			std::system("cls");
			std::cout << "Enter a id number of the record that has been resolved ";
			std::cin >> userInput;
			for (auto& record : incidentList)
			{
				if (record.id == userInput)
				{
					record.status = Status::Resolved;
					DispatchRecord dRec{ packageRecord(record) };
					dRec.event = Event::IncidentResolvedEvent;
					eventBus.publish(dRec);
					eventBus.process();
					break;
				}
			}
			break;

		}
		return;
	}

	void openIncident()
	{
		int userInput;
		while (true)
		{
			std::system("cls");
			std::cout << "Enter a id number of the record that will be reopened ";
			std::cin >> userInput;
			for (auto& record : incidentList)
			{
				if (record.id == userInput)
				{
					if (record.status == Status::Archived || record.status == Status::Resolved)
					{
						record.status = Status::Unassigned;
						DispatchRecord dRec{ packageRecord(record) };
						dRec.event = Event::IncidentReopenedEvent;
						eventBus.publish(dRec);
						eventBus.process();

					}
					
					break;
				}
			}
			break;

		}
		return;
	}

	void viewIncident()
	{
		int userInput;
		while (true)
		{
			std::system("cls");
			std::cout << "Enter a id number of the record that printed ";
			std::cin >> userInput;
			for (auto& record : incidentList)
			{
				if (record.id == userInput)
				{
					DispatchRecord dRec{ packageRecord(record) };
					dRec.event = Event::IncidentViewEvent;
					eventBus.publish(dRec);
					eventBus.process();


					break;
				}
			}
			break;

		}
		return;
	}


private:
	std::vector<Technician> techList; //maybe change this to hash map
	std::vector<IncidentRecord> incidentList;//same here
	std::vector<IncidentRecord> incidentArchive;
	EventBus eventBus;
	int counter{};
	size_t techCounter{};
	int recordAssigned;
	

};

