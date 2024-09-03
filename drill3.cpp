#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <algorithm>

#include "drill3_custom_functions.cpp"

// a function reading 2 ints and printing them out, unless a non - int is given
inline void d3_step1() {

	std::cout << "This program takes in every 2 numer inputs and logs them, program will exist if input != number.\n";

	int input1 = 0;
	int input2 = 0;

	while (std::cin >> input1 >> input2) {
			std::cout << input1 << " " << input2;
	}
}

// a function reading 2 ints and logging which is higher and which lower
inline void d3_step2_to_5() {
	std::cout << "This program takes in every 2 numer inputs and logs them, stating which is higher and which lower."
		<< "\nProgram will exist if input != number.\n";
	double input1 = 0;
	double input2 = 0;

	while (std::cin >> input1 >> input2) {
		if (input1 > input2) {
			if (input1 - input2 <= 0.01) {
				std::cout << "The numbers are almost equal";
			}
			else {
				std::cout << input1 << " Is higher than " << input2 << "\n";
			}

		}
		else if (input1 < input2) {
			if (input2 - input1 <= 0.01) {
				std::cout << "The numbers are almost equal";
			}
			else {
				std::cout << input2 << " Is higher than " << input1 << "\n";
			}
		}
		else {
			std::cout << input1 << " equals " << input2 << "\n";
		}
	}
}

inline void d3_step6_to_11() {
	std::cout << "This program collects number inputs and units, for each input, it stores the largest and smallest input.\n"
		<< "The viable units for your inputs are cm, m, in, ft; please give your input, followed by a space and your unit.\n"
		<< "Example input: 1 cm\n"
		<< "To stop giving inputs, press control + Z (windows)/control + D (linux) or anything which isn't a number, for your number input\n\n"
		<< "At the end, you will receive the sum of your inputs, as well as the number of inputs you have and your sorted input list";
	// vector which will store all values (converted to cm (instead of m as instructed) coz I can)
	std::vector<double> inputs_v;

	double current_input = 0;
	std::string current_unit;

	double smallest_input = 0;
	std::string smallest_input_unit = current_unit;

	double largest_input = 0;
	std::string largest_input_unit = current_unit;

	while (std::cin >> current_input >> current_unit) {
		
		// check if a "viable" unit is given
		if (!cm_multiplier(current_unit))
		{
			std::cout << "I am sorry, I do not recognise this unit. Please try again, the program will now quit.";
			return;
		}
		// convert inputs for direct comparison
		double converted_current = current_input * cm_multiplier(current_unit);
		double converted_smallest = smallest_input * cm_multiplier(smallest_input_unit);
		double converted_largest = largest_input * cm_multiplier(largest_input_unit);

		if (converted_current <= converted_smallest) {
			smallest_input = current_input;
			smallest_input_unit = current_unit;
			std::cout << "Smallest input is: " << smallest_input << smallest_input_unit << '\n';
		}
		if (converted_current >= converted_largest) {
			largest_input = current_input;
			largest_input_unit = current_unit;
			std::cout << "Largest input is: " << largest_input << largest_input_unit << '\n';
		}

		inputs_v.push_back(converted_current);

	}
	double sum = 0;
	for (double number : inputs_v) {
		sum += number;
	}

	std::cout << "\nSum  = " << sum << "cm;\n"
		<< "Number of inputs = " << inputs_v.size() << '\n';

	std::ranges::sort(inputs_v);

	std::cout << "All inputs: ";
	for (double number : inputs_v) {
		std::cout << number << "cm, ";
	}
}

// page 78
static void drill3() {
	// d3_step1();
	// d3_step2_to_5();
	d3_step6_to_11();
}