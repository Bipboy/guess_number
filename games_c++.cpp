#include <iostream>
#include <cstdlib>
#include <ctime>



int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0, guess;

	std::cout << "\welcome to Guess My Number\n\n";

	//Gane cycle
	std::cout << "Enter a guess: ";
}

