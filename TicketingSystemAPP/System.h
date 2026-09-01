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
		else
		{

		}
	}

	void viewSelect()
	{
		int userInput;
		std::cin >> userInput;
		if (userInput == 1)
		{
			//create record routine and eventual event hit
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
			//create record routine and eventual event hit
		}
		else
		{

		}
	}

	void priortySelect()
	{
		int userInput;
		std::cin >> userInput;
		if (userInput == 1)
		{
			//create record routine and eventual event hit
		}
		else
		{

		}
	}

	void commentSelect()
	{
		int userInput;
		std::cin >> userInput;
		if (userInput == 1)
		{
			//create record routine and eventual event hit
		}
		else
		{

		}
	}

	void resolveSelect()
	{
		int userInput;
		std::cin >> userInput;
		if (userInput == 1)
		{
			//create record routine and eventual event hit
		}
		else
		{

		}
	}

	void reopenSelect()
	{
		int userInput;
		std::cin >> userInput;
		if (userInput == 1)
		{
			//create record routine and eventual event hit
		}
		else
		{

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

	void setupHandlers()
	{
		std::function<void(NotificationSystem*,const IncidentRecord&)> func(NotificationSystem::reportConfirm);
		manager.createdEventHandlerInit(func);
		
		
	}

private:
	int userInput;
	UiSystem ui;
	NotificationSystem noti;
	IncidentManager manager;
	AuditSystem audit;

	
	bool done{ false };
};

