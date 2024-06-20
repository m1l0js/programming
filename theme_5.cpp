#include <iostream>
#include <string>

int main()
{
	std::cout << "enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::cout << "enter your car brand: ";
	std::string car{};
	std::getline(std::cin >> std::ws, car);

	std::cout << "Your name is " << name << " and the car brand is " << car;

	std::cout << "This is for test";
	std::string other{};
	std::getline(std::cin >>  , other);
	return 0;
}