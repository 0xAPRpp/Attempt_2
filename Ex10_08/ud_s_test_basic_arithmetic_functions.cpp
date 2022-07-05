#include "ud_h_test_basic_arithmetic_functions.h"
#include "ud_dh.h"

int ud_n_test_basic_arithmetic_functions::ud_f_add(int x, int y)
{

#ifdef TEST_BASIC_ARITHMETIC_FUNCTIONS
	std::cout << "ud_f_add is called!" << std::endl;
#endif

	return x + y;
}

int ud_n_test_basic_arithmetic_functions::ud_f_mul(int x, int y)
{

#ifdef TEST_BASIC_ARITHMETIC_FUNCTIONS
	std::cout << "ud_f_mul is called!" << std::endl;
#endif

	return x * y;
}

int ud_n_test_basic_arithmetic_functions::ud_f_diff(int x, int y)
{

#ifdef TEST_BASIC_ARITHMETIC_FUNCTIONS
	std::cout << "ud_f_diff is called!" << std::endl;
#endif

	return x - y;
}
