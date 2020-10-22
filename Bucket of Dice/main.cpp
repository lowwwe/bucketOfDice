// author Pete
// date Oct 2020
// bucket of dice
// estimated time 15 minutes

// session 1 start 12:00

#include <iostream> // cout & cin
#include <cstdlib> // srand & rand
#include <ctime> // time

int main()
{
	int diceFaces = 0;
	
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::cout << "How many faces on the dice? ";
	std::cin >> diceFaces;
	return 1;
}