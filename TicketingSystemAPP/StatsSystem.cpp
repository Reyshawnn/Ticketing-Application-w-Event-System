#include "StatsSystem.h"
void StatsSystem::resolveTech(std::vector<Technician>& techList) const
{
	for (auto& tech : techList)
	{
		std::cout << tech.name << " has resolved " << tech.resolvedIncidents << "\n";
	}
}

void StatsSystem::incidentTech(std::vector<Technician>& techList) const
{
	for (auto& tech : techList)
	{
		std::cout << tech.name << " has " << tech.incidents << " incidents" << "\n";
	}
}