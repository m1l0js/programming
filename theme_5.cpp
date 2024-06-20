#include <iostream>
#include <string>
#include <typeinfo>

int getting_age() {
	int age{};
	std::cout << "Enter your age: ";
	std::cin >> age;
	return age;

}

int getting_length_name()
{
	std::cout << "Enter your full name: ";
	std::string full_name;
	std::getline(std::cin >> std::ws, full_name);
	std::cout << typeid(full_name).name() << std::endl;
	int length{ static_cast<int>(full_name.length()) };
	std::cout << typeid(length).name() << std::endl;
	return length;

}

int main()
{
	int first_value{};
	int second_value{};
	first_value = getting_age();
	second_value = getting_length_name();
	std::cout << "Your age + length of name is: " << first_value + second_value << '\n';
	return 0;
}