#include <iostream>
#include<string>

inline void greeting() {
	std::cout << "Enter your name and press enter:\n";

	std::string first_name;

	// reads character input into first_name
	std::cin >> first_name;

	std::cout << "Hello, " << first_name << "!\n";
}

inline void age() {
	std::cout << "Enter your age in years: \n";
	double age;
	std::cin >> age;
	std::cout << "You are " << age * 12 << " months old!";
}

inline void follow_along() {
	greeting();
	age();
}