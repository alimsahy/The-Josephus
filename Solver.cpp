#include "pch.h"
#include "Solver.h"

Solver::Solver()
{

}

Solver::~Solver()
{

}

void Solver::getExecutionList(unsigned __int32 totalSoldier, unsigned __int32 executionStep, unsigned __int32 survivorCount)
{
	std::cout << std::endl << std::endl << "Execution list: " << std::endl;

	soldiers.clear();
	for (__int32 i = 0; i < totalSoldier; i++)
	{
		soldiers.push_back(i);
	}

	__int32 index = 0;
	while (soldiers.size() > survivorCount)
	{
		index += executionStep - 1;
		if (index >= soldiers.size())
		{
			index %= soldiers.size();
		}

		std::cout << soldiers[static_cast<unsigned __int32>(index)] << ", ";
		std::vector<unsigned __int32>::iterator iterator = soldiers.begin() + static_cast<unsigned __int32>(index);
		soldiers.erase(iterator);
	}

}

unsigned __int32 Solver::findSurvivors(unsigned __int32 totalSoldier, unsigned __int32 executionStep, unsigned __int32 survivorCount)
{
	unsigned int i = survivorCount + 1;
	for (unsigned int j = i; j <= totalSoldier; j++, i++)
	{
		survivorCount = (survivorCount + executionStep) % i;
	}
	return survivorCount;
}
