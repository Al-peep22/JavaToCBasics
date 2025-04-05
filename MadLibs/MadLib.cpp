#include "MadLib.h"

void Lib::Read() {
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter Letter: ";
    std::cin >> letter;

    std::cout << "Enter a verb: ";
    std::cin >> verb;

    std::cout << "Enter a adjective: ";
    std::cin >> adj;

    std::cout << "Enter a place: ";
    std::cin >> place;
}

void Lib::Write() {
    std::cout << "At the age of " << age << " " << name << " went to " << place << " to take a very \n";
    std::cout << adj << " test. " << name << " " << verb << " the whole way to the test. \n";
    std::cout << name << " finished the test and got a " << letter << " on the test.\n";
}