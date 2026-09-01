#pragma once
#include <Data.h>
#include <iostream>
struct NotificationSystem
{
	void reportConfirm(const IncidentRecord& record); //Maybe take in a incident record and show information
	void confirmTech(const IncidentRecord& record) const;
	void priorityConfirm(const IncidentRecord& record) const;
	void commentConfirm(const IncidentRecord& record) const; //could probably change this to int 
	void resolveConfirm(const IncidentRecord& record) const;
	void reopenConfirm(const IncidentRecord& record) const;
	void deleteConfirm(const IncidentRecord& record) const;
	void archiveConfirm(const IncidentRecord& record) const;
	
};

