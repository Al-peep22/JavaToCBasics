#pragma once
#include <iostream>
#include <string>

class GuessingGame {
public:
	int high;
	int low;
	int guess;
	std::string checkGuess(int answer, int guess);
	void reset();
	int generateNumber(int higher, int lower);
private:
	int answer;
	int guessesLeft = 5;
};
