#pragma once
#include <iostream>
#include <vector>
#include <Data.h>
struct AuditSystem
{
	std::vector<std::string_view> data;

	void reportConfirm(const IncidentRecord& record);

	void confirmTech(const IncidentRecord& record);

	void priorityConfirm(const IncidentRecord& record);

	void commentConfirm(const IncidentRecord& record); //could probably change this to int 
	
	void resolveConfirm(const IncidentRecord& record);
	

	void reopenConfirm(const IncidentRecord& record);

	void deleteConfirm(const IncidentRecord& record);
	

	void archiveConfirm(const IncidentRecord& record);


	//Can make display functions where we loop through and display strings 
	//Maybe can use a hashmap with dated keys and values that correspond 
	//can also have other functions that print log based on key word 

	//complete decoupled may not be optimal for this project lol
};

