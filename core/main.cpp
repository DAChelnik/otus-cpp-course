#include <iostream>
#include <fstream>
#include <string>


#include "random_value.h"

bool  write_to_file(std::string user_name, int attempts_count, std::ofstream &);
bool read_from_file(std::ifstream &);

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
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file{high_scores_filename, std::ios_base::app};
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << attempts_count;
		out_file << std::endl;
	} // end of score here just to mark end of the logic block of code

	// Read the high score file and print all results
	{
		std::ifstream in_file{high_scores_filename};
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		int high_score = 0;
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << high_score << std::endl;
		}
	}

	std::cout << std::endl;
	system("pause");

	return 0;
}

/*	Write new high score to the records table
*/
bool write_to_file(std::string user_name, int attempts_count, std::ofstream &file)
{
	
	return true;
}

/*	Read the high score file and print all results
 */
bool read_from_file(std::ifstream &file)
{

	return true;
}