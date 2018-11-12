//

#include "pch.h"
#include "Solver.h"

int main()
{
	Solver josephus;
	unsigned __int32 n, k, s;

	while (true)
	{
		system("cls");

		std::cout << "Number of soldiers: ";
		std::cin >> n;

		if (!n)
		{
			return 0;
		}

		std::cout << "Execution step: ";
		std::cin >> k;
		std::cout << "How many survivors (Optionel - Type 0 to pass this option): ";
		std::cin >> s;

		std::cout << std::endl << "Survivor: ";
		if (s == 0)
		{
			s = 1;
		}

		if (s == 1)
		{
			std::cout << ": " << josephus.findSurvivors(n, k);
			josephus.getExecutionList(n, k);
		}
		else
		{
			std::cout << "s: ";
			for (unsigned __int32 i = 0; i < s; i++)
			{
				std::cout << josephus.findSurvivors(n, k, s);
			}
			josephus.getExecutionList(n, k, s);
		}

		std::cout << std::endl << std::endl;
		system("pause");
	}
}
