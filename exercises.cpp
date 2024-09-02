#include <iostream>
#include <string>


/* 
	considerations for improvement:
	- add an optional removal of pluralisation in the case for 1 mile/kilometer
	- rounding 
	- input safety
*/
inline void miles_to_km() {
	std::cout << "This program converts miles to kilometers.\n"
		<< "Please enter the number of miles which you'd like to convert into km:\n";

	double miles = 0;
	std::cin >> miles;

	std::cout << miles << " miles" << " = " << miles * 1.609 << " kilometers";
}

inline void exercises() {
	miles_to_km();
}