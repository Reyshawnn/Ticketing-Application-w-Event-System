#pragma once
#include <iostream>
#include "Data.h"
struct UiSystem
{
	void menuUI() const;

	void reportUI() const;

	void printRecord(const int id); //Will take in a record ID
	
	void viewRecord() const;

	void assignTech() const;

	void priorityChange() const;

	void commentAdd() const;

	void resolveReport() const;

	void reopenReport() const;

	void deleteRecord() const;

	

	//-- make more functions for each menu option and one that will be subscribed to the eventBus-

};

