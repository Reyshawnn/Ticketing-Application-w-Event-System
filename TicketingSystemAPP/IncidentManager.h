#pragma once
#include <iostream>
#include <vector>
#include <Data.h>
#include <Eventbus.h>


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
		IncidentRecord record;
		std::string userInput;
		int userInputInt;

		std::cout << " Set the title of your incident " << "\n";
		std::cin >> userInput;

		record.title = userInput;
		userInput.clear();

		std::cout << " Set the description of your incident " << "\n";
		std::cin >> userInput;


		record.description = userInput;
		userInput.clear();


		std::cout << " enter in your name" << "\n";
		std::cin >> userInput;


		record.reporter = userInput;
		userInput.clear();
		


		std::cout << " enter in the priority of the incident" << "\n";
		std::cin >> userInput;


		record.priority = userInput;
		userInput.clear();


		std::cout << " enter in the time you are creating this HH:MM" << "\n";
		std::cin >> userInput;


		record.createTime = userInput;
		userInput.clear();


		std::cout << " enter in your updated time  HH:MM" << "\n";
		std::cin >> userInput;


		record.updatedTime = userInput;
		userInput.clear();

		std::cout << " enter in any addional comments " << "\n";
		std::cin >> userInput;


		record.comment = userInput;
		userInput.clear();


		record.id = counter;
		counter++;

		incidentList.push_back(record);

		DispatchRecord dRec{ packageRecord(record) };
		dRec.event = Event::IncidentCreatedEvent;

		eventBus.publish(dRec);

	}
	void archiveRecord(const IncidentRecord& record)
	{
		//Will not modify anything will simply add the record to the archive

		incidentList.push_back(record);
	}

	void createdEventHandlerInit(std::function<void(NotificationSystem*,const IncidentRecord&)>& func)
	{
		eventBus.createdEventHandler(func);
	}
	
private:
	std::vector<Technician> techList;
	std::vector<IncidentRecord> incidentList;
	EventBus eventBus;
	int counter{};
	

};

