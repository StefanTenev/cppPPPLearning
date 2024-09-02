#include <string>
#include <iostream>

inline std::string get_name(std::string name_type) {
	std::string input_name;
	if (name_type == "first") {
		std::cout << "First name: ";
		std::cin >> input_name;
	}
	else if (name_type == "last") {
		std::cout << "Last name: ";
		std::cin >> input_name;
	}
	else {
		std::cout << "Incorrect argument for get_name function";
		exit(1);
	}
	return input_name;
}

inline int get_age() {
	int age = -1;

	std::cout << "Age: ";
	std::cin >> age;

	if (age < 0 || age > 150) {
		std::cout << "\nBULLSHIT! Give me the real age! \n";
		age = get_age();
	}

	return age;
}