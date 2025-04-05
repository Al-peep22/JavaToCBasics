#include "GuessingGame.h"


std::string GuessingGame::checkGuess(int answer, int guess) {
	std::string text1 = "";
	std::string text2 = "";
	std::string text3 = "";
	std::string text4 = "";
	std::string text5 = "";
	GuessingGame::guessesLeft = GuessingGame::guessesLeft - 1;
	int atempts = 5 - guessesLeft;
	if (guessesLeft > 0) {
		if (answer == guess) {
			text1 = "CORRECT!!! THE ANSWER WAS ";
			text2 = answer;
			text3 = "!!!!!\n It only took you ";
			text4 = atempts;
			text5 = " tries!";
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
	}
	std::cout << text1 << text2 << text3 << text4 << text5 << std::endl;
}

void GuessingGame::reset() {
	high = 0;
	low = 0;
	guess = 0;
	answer = 0;
	guessesLeft = 5;
}

int GuessingGame::generateNumber(int higher, int lower) {
	//Random rand = new Random();
	//int result = randInt(higher,lower);
}