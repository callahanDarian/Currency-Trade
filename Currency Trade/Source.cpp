#include <iostream>
#include <string>
#include <iomanip>


int main()
{
	double AmericaDollar;

	std::cout << "Input an amount of American Dollars \n > ";
	std::cin >> AmericaDollar;

	std::cout << std::endl;

	double BritishPound = AmericaDollar*0.6318;
	std::cout << "British Pound : "
		<< std::fixed << std::setprecision(2) << std::setfill('0')
		<< BritishPound << std::endl;

	double MexicanPeso = AmericaDollar*12.8863;
	std::cout << "Mexican Peso : "
		<< std::fixed << std::setprecision(2) << std::setfill('0')
		<< MexicanPeso << std::endl;

	double JapaneseYen = AmericaDollar*82.34;
	std::cout << "JapaneseYen : "
		<< std::fixed << std::setprecision(2) << std::setfill('0')
		<< JapaneseYen << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}