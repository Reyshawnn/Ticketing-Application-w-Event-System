#pragma once
#include <iostream>
#include "Data.h"
#include <format>
struct UiSystem
{
	void menuUI() const;
	void reportUI() const;
    void printRecord(const IncidentRecord& incident); //Will take in a record ID
	void viewRecord() const;
	void assignTech() const;
	void priorityChange() const;
	void commentAdd() const;
	void resolveReport() const;
	void reopenReport() const;
	void deleteRecord() const;

	void reportConfirm(const IncidentRecord& record); //Maybe take in a incident record and show information
	void confirmTech(const IncidentRecord& record) const;
	void priorityConfirm(const IncidentRecord& record) const;
	void commentConfirm(const IncidentRecord& record) const; //could probably change this to int 
	void resolveConfirm(const IncidentRecord& record) const;
	void reopenConfirm(const IncidentRecord& record) const;
	void deleteConfirm(const IncidentRecord& record) const;
	void archiveConfirm(const IncidentRecord& record) const;

	

	//-- make more functions for each menu option and one that will be subscribed to the eventBus-

};

