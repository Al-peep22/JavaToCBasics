#pragma once
#include <iostream>
#include <string>

class Lib {
public:
	void Read();
	void Write();

private:
	std::string name;
	std::string verb;
	std::string place;
	std::string adj;
	char letter;
	short age;
};