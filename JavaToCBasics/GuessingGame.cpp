#include "GuessingGame.h"


void GuessingGame::checkGuess() {
	std::string text1 = "";
	std::string text2 = "";
	std::string text3 = "";
	std::string text4 = "";
	std::string text5 = "";
	guessesLeft = guessesLeft - 1;
	int atempts = 5 - guessesLeft;
	if (guessesLeft > 0) {
		if (answer == guess) {
			text1 = "CORRECT!!! THE ANSWER WAS ";
			text2 = answer;
			text3 = "!!!!!\n It only took you ";
			text4 = atempts;
			text5 = " tries!";
			gameOn = false;
		}
		else if (guess < answer) {
			text1 = "Sorry you guessed to LOW, ";
		}
		else {
			text1 = "Sorry you guessed to HIGH, ";
		}
		text2 = guessesLeft;
		text3 = " tries left";
	}
	else {
		guessesLeft = 0;
		text1 = "Sorry you FAILED, you have ";
		text2 = guessesLeft;
		text3 = " tries left";
		gameOn = false;
	}
	std::cout << text1 << text2 << text3 << text4 << text5 << std::endl;
}

void GuessingGame::reset() {
	high = 0;
	low = 0;
	guess = 0;
	answer = 0;
	guessesLeft = 5;
	restarted = true;
}

int GuessingGame::generateNumber(int higher, int lower) {
	// Seed the random number generator
	srand(time(0));

	int randomNumber = rand() % higher + lower;

	return randomNumber;
}

void GuessingGame::getGuess() {
	std::cout << "Enter your guess or type (-5) to restart: ";
	int input;
	std::cin >> input;
	if(input == -5) {
		reset();
	}
	else {
		guess = input;
		checkGuess();
	}
}

void GuessingGame::getRange() {
	std::cout << "Enter Lower Bound: ";
	std::cin >> low;

	std::cout << "Enter Higher Bound: ";
	std::cin >> high;
	answer = generateNumber(high, low);
}