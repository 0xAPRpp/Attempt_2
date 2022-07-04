# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <ctime>
#include "ud_h_test_basic_arithmetic_functions.h"
# include "ud_dh.h"

using namespace ud_n_test_basic_arithmetic_functions;

size_t random(size_t limit)
{
	return static_cast<size_t>(std::rand() / (RAND_MAX / limit + 1));
}

int main()
{
	size_t no_of_functions{3};
	std::srand(static_cast<size_t>(std::time(nullptr)));

	size_t random_selection{};
	for (size_t i{}; i < 5; i++)
	{
		random_selection = random(6);
		
#ifdef TEST_RANDOM
		if (random_selection >= no_of_functions)
			std::cout << "Invalid Random Number: " << random_selection << std::endl;
#endif

		switch (random_selection)
		{
		case 0:
			std::cout << ud_f_add(random(RAND_MAX), random(RAND_MAX)) << std::endl;
			break;
		case 1:
			std::cout << ud_f_mul(random(RAND_MAX), random(RAND_MAX)) << std::endl;
			break;
		case 2:
			std::cout << ud_f_diff(random(RAND_MAX), random(RAND_MAX)) << std::endl;
			break;
		}
	}
	
	system("pause");
}

