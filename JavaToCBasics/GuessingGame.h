#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <string>
using namespace std;

class GuessingGame {
public:
	bool gameOn;
	bool restarted;
	int high;
	int low;
	int guess;
	void getRange();
	void getGuess();
	void reset();
	int generateNumber(int higher, int lower);
private:
	int answer;
	int guessesLeft = 5;
	void checkGuess();
};
