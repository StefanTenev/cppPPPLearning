#include <iostream>
#include <vector>

inline void pound_to_dollar() {

	constexpr double rate_to_dollars = 1.31;
	constexpr char pounds_to_dollars = '1';
	constexpr char dollars_to_pounds = '2';

	char conversion_choice = 'x';

	double conversion_amount = 0;

	std::cout << "This program converts British pound/s (£) into US dollar/s ($) (exchange rate for 02/09/2024).\n"
		<< "If you would like to convert pounds to dollars, please press one, else press 2.\n";
	std::cin >> conversion_choice;

	if (conversion_choice != '1' && conversion_choice != '2') {
		std::cout << "I'm sorry, I didn't recognise this input, please try again, using only '1' or '2'";
		return;
	}

	std::cout << "Please enter the amount which you would like to convert: ";
	std::cin >> conversion_amount;

	// converting pounds to dollars - note the necessity to turn the pound symbol into a string as it is not a recognised char..
	if (conversion_choice == pounds_to_dollars) {
		std::cout << "£" << conversion_amount << " = " << '$' << conversion_amount * rate_to_dollars;
	}
	else if (conversion_choice == dollars_to_pounds) {
		std::cout << '$' << conversion_amount << " = " << "£" << conversion_amount / rate_to_dollars;
	}
}

inline void while_example() {
	int i = 0;
	while (i < 26) {
		char iterating_char = 'a' + i;
		std::cout << iterating_char << " ASCII : " << ('a' + i) << '\n';
		++i;
	}
}

inline void for_example() {
	char iterating_char;
	for (int i = 0; i < 26; i++) {
		iterating_char = 'a' + i;
		std::cout << iterating_char << " ASCII : " << ('a' + i) << '\n';

	}
}

static void follow_along3() {
	// pound_to_dollar();
	// while_example();
	// for_example();

	std::vector<std::string> words = { "a", "man", "a", "plan", "a", "canal", "panama" };

	for (int i = 0; i < words.size(); ++i) {
		if (i == 0 || words[i - 1] != words[i]) {
			std::cout << words[i] << "\n";
		}
	}
}