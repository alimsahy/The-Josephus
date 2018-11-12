#include <vector>
#include <iostream>

class Solver
{
	public:
		Solver();
		~Solver();

		unsigned __int32 findSurvivors(unsigned __int32 totalSoldier, unsigned __int32 executionStep, unsigned __int32 survivorCount = 1);
		void getExecutionList(unsigned __int32 totalSoldier, unsigned __int32 executionStep, unsigned __int32 survivorCount = 1);

private:
	std::vector<unsigned __int32> soldiers;
};

