#include <iostream>
#include <string>


/* 
*	Exercise 2 - converting miles to km
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

/*
*	Exercise 3 - program declaring illegal names to see result
	commented out to prevent errors...
*/
//inline void illegal_names() {
//	int double;
//	string char;
//	char string;
//	int 1start_with_number;
//	int @start_with_at;
//	string has@at;
//	string string;
//	double if;
//	double else;
//	double while;
//}

inline void exercises() {
	// miles_to_km();
	// illegal_names();
}