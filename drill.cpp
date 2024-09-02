#include <iostream>
#include <string>
/*
	functions for reusability
	in a simple cpp file for now, because I have no idea how files work in this language
	and already spent hours trying to fix different translation errors (also with conflicts from given help headers...)
	will adopt a proper style as I learn
*/
#include "drill_custom_functions.cpp"

inline void custom_letter() {
	std::cout << "Writing a custom letter.\n"
		<< "Please enter inputs for each prompt, followed by enter, your letter will be formatted at the end.\n\n";

	std::cout << "Please enter your:\n";
	std::string first_name = get_name("first");
	std::string last_name = get_name("last");
	

	std::cout << "For the person you're writing to, please enter their:\n";
	std::string first_name_to = get_name("first");
	std::string last_name_to = get_name("last");

	std::cout << "Please enter the content of your letter, pressing control + D (for Linux) when you're done:\n";

	std::string current_word;
	std::string content;
	while (std::cin >> current_word) {
		content += " " + current_word;
	}

	std::cout << "Your formatted letter:\n\n"
		<< "Dear " << first_name_to << " " << last_name_to << ",\n\n"
		<< content << "\n\n"
		<< "Best regards,\n"
		<< first_name << " " << last_name << '\n';
}

inline void auto_letter() {
	std::cout << "Writing an automated letter\n"
		<< "Please enter inputs for each prompt, followed by enter.\n\n";

	std::cout << "Please enter your:\n";
	std::string first_name = get_name("first");
	std::string last_name = get_name("last");


	std::cout << "For the person you're writing to, please enter their:\n";
	std::string first_name_to = get_name("first");
	std::string last_name_to = get_name("last");
	int age = get_age();

	std::string automated_content;

	if (age < 12) {
			automated_content = "Hahahaha, you're still a lil kiddy!";
	}
	else if (age < 18 && age == 17) {
		automated_content = "Wawawiwa! Next year you will be able to vote!";
	}
	else if (age > 20 && age < 40) {
		automated_content = "Damn, you're still in your golden years!";
	}
	else if (age > 40 && age < 60) {
		automated_content = "Damn, is midlife crisis coming to you by now?";
	}
	else if (age > 60 && age < 70) {
		automated_content = "Wawawiwa! Retirement soon?";
	}
	else {
		automated_content = "Damn geeza have you retired yet?";
	}

	std::cout << "Your formatted letter:\n\n"
		<< "Dear" << first_name_to << " " << last_name_to << ",\n\n"
		<< age << " ," << automated_content << '\n'
		<< "On your next birthday, you'll be " << age + 1 << ".\n"
		<< "Go fak yourself nao.\n\n"
		<< "Best regards,\n"
		<< first_name << " " << last_name << '\n';


}

inline void drill() {
	std::cout << "This program allows you to write either an automated, or custom letter.\n"
		<< "If you would like to write a custom letter, please write 'cl', else, write 'al', when done, please press the enter key.\n";
	
	std::string letter_choice;
	std::cin >> letter_choice;
	if (letter_choice == "cl") {
		custom_letter();
	}
	else if (letter_choice == "al") {
		auto_letter();
	}
	else {
		std::cout << "This is an incorrect input, DIKKKHEEED, now start again since you're so smart";
	}
}