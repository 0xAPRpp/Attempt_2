# include <iostream>
# include <iomanip>
# include "one.h"
# include "prints_value.h"

int main()
{
	std::cout << std::setprecision(16) << apr::pi << std::endl;
	std::cout << apr::e << std::endl;
	std::cout << apr::sqrt_2 << std::endl;

	apr1::prints_value(apr::pi);

	system("pause");
}

