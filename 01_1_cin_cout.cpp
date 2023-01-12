#include <iostream>
#include <string>

int main() {


	int value1, value2;
	std::string name;

	// Console OUTput:
	std::cout << "Input your name: " << std::endl;
	// Console INput
	std::cin >> name;

	std::cout << "Input your name (without endl): ";
	std::cin >> name;

	std::cout << "Input value1 and value2: " << std::endl;
	std::cin >> value1 >> value2;

	std::cout << "Hi (without endl), " << name << std::endl;
	std::cout << "Hi, " << name << std::endl;
	std::cout << "sum of two values is: " << value1 + value2 << std::endl;

	return 0;
}
