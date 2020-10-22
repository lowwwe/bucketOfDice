// author Pete
// date Oct 2020
// bucket of dice
// estimated time 15 minutes
// actual time 30 min
// session 1 start 12:00 - 12:46 (15 min other stuff)

#include <iostream> // cout & cin & system
#include <cstdlib> // srand & rand
#include <ctime> // time

void rollDice(int t_noOfFaces);

int main()
{
	int diceFaces = 0;
	
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	std::cout << "How many faces on the dice? ";
	std::cin >> diceFaces;
	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);

	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);
	rollDice(diceFaces);

	std::system("pause");
	return 1;
}

void rollDice(int t_noOfFaces)
{
	int result = -1;
	result = (std::rand() % t_noOfFaces) + 1;
	std::cout << "You rolled a " << result << std::endl;
}