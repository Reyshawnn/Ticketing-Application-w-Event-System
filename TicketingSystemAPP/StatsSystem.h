#pragma once
#include <Data.h>
#include <vector>
#include <iostream>

struct StatsSystem
{
	int totalIncidents;
	int totalResolved;

	int lowPriority;
	int normalPriority;
	int highPriority;


	void resolveTech(std::vector<Technician>& techList) const;

	void incidentTech(std::vector<Technician>& techList) const;

};


