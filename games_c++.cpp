#include <iostream>
#include <cstdlib>
#include <ctime>



int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 100 + 1;
	int tries = 0, guess;

	std::cout << "\welcome to Guess My Number\n\n";

	//Gamee cycle
	do {
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		++tries;

		if (guess > secretNumber) {
			std::cout << "Too high\n\n";
		}
		else if (guess < secretNumber) {
			std::cout << "Too low\n\n";
		}
		else {
			std::cout << "\nThat is it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
	
	return 0;
}