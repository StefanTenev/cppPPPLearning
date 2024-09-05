#include <iostream>
#include <string>

/*
* Exercise 2 - a [rogram reading an input and thne logging each char and its integer value on a new line
*/

inline void ex2() {
	std::cout << "Enter input:\n";

	std::string input;

	std::cin >> input;

	for (char temp : input) {
		int char_numeric = temp;
		std::cout << temp << " : " << char_numeric << '\n';
	}


}


static void exercises3() {
	ex2();
}