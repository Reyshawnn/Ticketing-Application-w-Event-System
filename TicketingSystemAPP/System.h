#pragma once
#include <iostream>
#include <UiSystem.h>
#include <NotificationSystem.h>
#include <IncidentManager.h>
#include <StatsSystem.h>
#include <AuditSystem.h>
#include <functional>



/*



*/


class System
{
public:
	void menu()
	{
		while (!done)
		{
			ui.menuUI();
			std::cin >> userInput;
			optionSelect(userInput);

		}
	}

	void optionSelect(int input)
	{
		
		switch (input)
		{
		case 1:
			ui.reportUI();
			reportSelect();
			break;

		case 2:
			ui.viewRecord();
			viewSelect();
			break;

		case 3:
			ui.assignTech();
			techSelect();
			break;

		case 4:
			ui.priorityChange();
			priortySelect();
			break;
		case 5:
			ui.commentAdd();
			commentSelect();
			break;
		case 6:
			ui.resolveReport();
			resolveSelect();
			break;

		case 7:
			ui.reopenReport();
			reopenSelect();
			break;

		case 8:
			ui.deleteRecord();
			deleteSelect();
			break;
		}
		
	}

	void reportSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			//create record routine and eventual event hit
			manager.createRecord();
			
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void viewSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			//create record routine and eventual event hit
			manager.viewIncident();
		}
		else
		{

		}
	}

	void techSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			manager.assignTechnician();
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void priortySelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			manager.changePriority();
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void commentSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			manager.addComment();
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void resolveSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			manager.resolveIncident();
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void reopenSelect()
	{
		int userInput;
		std::cin >> userInput;
		
		if (userInput == 1)
		{
			manager.openIncident();
		}
		else if (userInput == 2)
		{
			return;
		}
		else
		{
			std::cout << "invalid input " << "\n";
		}
	}

	void deleteSelect()
	{
		int userInput;
		std::cin >> userInput;
	
		switch (userInput)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;

		}
	}

	void subSystemInit()
	{
		//CreatedEvent function setup------------------------------------------------------//

		std::function<void(const IncidentRecord&)> func =
			[&](const IncidentRecord& record)
			{
				ui.reportConfirm(record);
			};
		manager.createdEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				ui.printRecord(record);
			};

		manager.createdEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				manager.addIncident(record);
			};
		
		manager.createdEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.reportConfirm(record);
			};

		manager.createdEventHandlerInit(func);

		//AssignedEvent function setup------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.confirmTech(record);
			};

		manager.assignedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.confirmTech(record);
			};

		manager.assignedEventHandlerInit(func);


		//PriorityChangedEvent function setup-----------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.priorityConfirm(record);
			};

		manager.priorityChangedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.priorityConfirm(record);
			};

		manager.priorityChangedEventHandlerInit(func);


		//CommentAddedEvent-------------------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.commentConfirm(record);
			};

		manager.commentAddedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.commentConfirm(record);
			};

		manager.commentAddedEventHandlerInit(func);


		//resolveEvent function setup---------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.resolveConfirm(record);
			};

		manager.resolvedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.resolveConfirm(record);
			};

		manager.resolvedEventHandlerInit(func);


		//reopenEvent Function setup-----------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.reopenConfirm(record);
			};

		manager.reopenedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.reopenConfirm(record);
			};

		manager.reopenedEventHandlerInit(func);


		//ArchivedEvent Function setup-----------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.archiveConfirm(record);
			};

		manager.archivedEventHandlerInit(func);


		func =
			[&](const IncidentRecord& record)
			{
				audit.archiveConfirm(record);
			};

		manager.archivedEventHandlerInit(func);


		//IncidentViewEvent Function setup-----------------------------------------------------------//

		func =
			[&](const IncidentRecord& record)
			{
				ui.printRecord(record);
			};

		manager.viewEventHandlerInit(func);


	}
	

private:
	int userInput;
	UiSystem ui;
	IncidentManager manager;
	AuditSystem audit;
	bool done{ false };
};

