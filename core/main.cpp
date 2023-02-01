#include <iostream>
#include <fstream>
#include <string>


#include "random_value.h"
#include "ask_about_name.h"
#include "read_write_file.h"

int main() 
{
	const std::string high_scores_filename = "high_scores.txt";

	int attempts_count = 1;
	int random_value = get::RandomValue();
	int current_value = 0;
	bool not_win = true;

	// Ask about name
	std::cout << "Welcome to the game: GUESS THE NUMBER" << std::endl;
	std::cout << std::endl;
	std::cout << "What is your name?" << std::endl;
	std::cout << "Enter your name and press enter:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

	std::cout << std::endl;
	std::cout << "I have already picked a number between 1 and 100. Please make your guess. " << std::endl;
	std::cout << "Enter the number and press enter:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value < random_value) {
			std::cout << "number must be greater than " << current_value << std::endl;
		}
		else if (current_value > random_value) {
			std::cout << "number must be less than " << current_value << std::endl;
		}
		else {
			std::cout << std::endl;
			std::cout << "Congratulations! You won in " << attempts_count << " attempts." << std::endl;
			std::cout << std::endl;
			break;
		}
		attempts_count++;

	} while(true);

	// Write new high score to the records table
	read_write_file::write_to_file(user_name, attempts_count);

	// Read the high score file and print all results
	read_write_file::read_from_file();

	std::cout << std::endl;
	system("pause");

	return 0;
}

