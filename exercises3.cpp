#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <algorithm>
#include "exercises3_custom_functions.cpp"
#include <cmath>

/*
* Exercise 2 - a [rogram reading an input and thne logging each char and its integer value on a new line
*/

inline void ex3_2() {
	std::cout << "Enter input:\n";

	std::string input;

	std::cin >> input;

	for (char temp : input) {
		int char_numeric = temp;
		std::cout << temp << " : " << char_numeric << '\n';
	}


}

inline void find_median() {

	std::cout << "This programme calculates the median of a number sequence.\n"
		<< "Please enter your number sequence by entering a number, followed by enter.\n"
		<< "Press control + Z(windows) / control + D(linux) to mark the end of your input.\n"
		<< "Your sequence:\n";

	std::vector<double> number_sequence;

	for (int temp; std::cin >> temp;) {
		number_sequence.push_back(temp);
	}

	std::ranges::sort(number_sequence);

	if (number_sequence.size() % 2 == 0) {
		double median = (number_sequence[number_sequence.size() / 2] + number_sequence[(number_sequence.size() / 2) - 1]) / 2;

		std::cout << "Median: " << median;
	}
	else {
		double median = number_sequence[number_sequence.size() / 2];
		std::cout << "Median: " << median << number_sequence.size();
	}
}


inline void squares_of_two() {
	std::cout << "This programme shows the squares of two - up to 64\n";
	for (int i = 0; i < 65; i++) {
		std::cout << "2 ^ " << i << " = " << num_to_power(2, i) << '\n';
	}
}

inline void primes_to_100() {
	std::cout << "Prime numbers 1 - 100: \n";
	for (int i = 2; i <= 100; i++) {
		if (check_if_prime(i)) {
			std::cout << i << '\n';
		}
	}
}

inline double quadratic_solver(double a, double b, double c) {
	// -b +/- _/(b^2 -4ac)
	//	----------------
	//		  2a

	// check if correct input is given
	if (a == 0 || b == 0 || c == 0) {
		std::cout << "Error: a, b & c must be non-zero values!";\
			return 0;
	}

	double root = b * b - 4 * a * c;

	// check if root is negative
	if (root < 0) {
		std::cout << "This quadratic has no solutions!";
		return 0;
	}

	double solution_1 = (-b + sqrt(root)) / 2 * a;
	double solution_2 = (-b - sqrt(root)) / 2 * a;

	// check if there is only one solution
	if (solution_1 == solution_2) {
		std::cout << "Solution: " << solution_1;
	}
	else {
		std::cout << "Solutions: " << solution_1 << " & " << solution_2;
	}
}

static void exercises3() {
	//ex2();
	//find_median(); 
	//squares_of_two();
	//primes_to_100();
	quadratic_solver(1, 3, 2);
}