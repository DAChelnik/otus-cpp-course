#include <iostream>
#include <string>

namespace my_own_namespace {

	int global_variable = 42;

	namespace nested {
		int global_variable = 10000042;
	}

}

int main() {
	std::cout << "global_variable = " << my_own_namespace::global_variable << std::endl;


	using namespace my_own_namespace;
	std::cout << "global_variable (after using) = " << global_variable << std::endl;

	int global_variable = 56;

	std::cout << "global_variable (after local) = " << global_variable << std::endl;

	{
		using my_own_namespace::global_variable;
		std::cout << "global_variable (after using for var) = " << global_variable << std::endl;
	}

	std::cout << "global_variable (nested 1) = " << nested::global_variable << std::endl;
	std::cout << "global_variable (nested 2) = " << my_own_namespace::nested::global_variable << std::endl;

	namespace nn = my_own_namespace::nested;
	std::cout << "global_variable (nn) = " << nn::global_variable << std::endl;
}
