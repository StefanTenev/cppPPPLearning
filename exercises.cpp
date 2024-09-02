#include <iostream>
#include <string>

// I was wondering whether to keep this as one whole file or extract it into a files for each exercise
// However, the functions are not too big and seemed manageable enough
// Moreover, since I am still not sure what is the right way of having module files for c++, I know that this is doable,
// whereas putting the code in cpp files might be a bit SUS

/* 
* Exercise 2 - converting miles to km
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
* Exercise 3 - program declaring illegal names to see result
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

/*
* Exercise 4 - prompt for 2 int values and perform some operations on them 
	considerations for improvement:
	- add input validation
	- add error if no value is enter/inform that base values will be 0
*/

inline void operations() {
	std::cout << "This program prompts for 2 int values and then performs some oprations on them.\n";

	int val1 = 0;
	int val2 = 0;

	

	std::cout << "Enter value 1: ";
	std::cin >> val1;


	std::cout << "Enter value 2: ";
	std::cin >> val2;
	
	std::cout << '\n';

	std::cout << "value 1: " << val1 << "; value 2: " << val2;
	std::cout << '\n';

	// compare the two values
	if (val1 > val2) {
		std::cout << "value 1 (" << val1 << ") > value 2 (" << val2 << ')';
	}
	else if (val2 > val1) {
		std::cout << "value 2 (" << val2 << ") > value 1 (" << val1 << ')';
	}
	else {
		std::cout << "value 1 (" << val1 << ") = value 2 (" << val2 << ')';
	}
	std::cout << '\n';

	// sum of two values
	std::cout << "Sum: " << val1 + val2 ;
	std::cout << '\n';

	// difference:
	if (val1 - val2 < 0) {
		std::cout << "Difference between the two values: " << (val1 - val2) * -1;
	}
	else {
		std::cout << "Difference between the two values: " << val1 - val2;
	}
	std::cout << '\n';

	// product: 
	std::cout << "Product: " << val1 * val2;
	std::cout << '\n';

	//ratio
	std::cout << "Ratio (remember - variables are ints and so values will be truncated) value 1 : value 2 - 1" << " : " << val2 / val1;
	std::cout << '\n';
}

/*
* Exercise 7 - sort 3 string inputs
*/

inline void sort_3_inputs() {

	std::string input1;
	std::string input2;
	std::string input3;

	std::cout << "This programme sorts 3 string inputs.\n"
		<< "Enter input 1: ";
	std::cin >> input1;

	std::cout << '\n';

	std::cout << "Enter input 2: ";
	std::cin >> input2;

	std::cout << '\n';

	std::cout << "Enter input 3: ";
	std::cin >> input3;

	std::cout << '\n' 
		<< "Your inputs in order (first to last): ";

	if (input1 <= input2 && input1 <= input3) {
		if (input2 <= input3) {
			std::cout << input1 << " " << input2 << " " << input3;
		}
		else {
			std::cout << input1 << " " << input3 << " " << input2;
		}
	}
	else if (input2 <= input1 && input2 <= input3) {
		if (input1 <= input3) {
			std::cout << input2 << " " << input1 << " " << input3;
		}
		else {
			std::cout << input2 << " " << input3 << " " << input1;
		}
	}
	else if (input3 <= input1 && input3 <= input2) {
		if (input1 <= input2) {
			std::cout << input3 << " " << input1 << " " << input2;
		}
		else{
			std::cout << input3 << " " << input2 << " " << input1;
		}
	}

}

/*
* Exercise
*/

inline void exercises() {
	// miles_to_km();
	// illegal_names();
	// operations();
	sort_3_inputs();
}