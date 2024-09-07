#include <iostream>
static double num_to_power(double num, int power){

	if (power == 0) {
		return 1;
	}

	double number = num;

	if (power > 0) {
		for (int i = 1; i < power; i++) {
			number *= num;
		}
		return number;
	}
	//else if (power < 0) {
	//	for (int i = -1; i < power; i--) {
	//		number *= num;
	//	}
	//	return num / number;
	//}
}

static double check_if_prime(int num) {

	for (int i = 1; i <= num; i++) {
		if (
			(num % i == 0) &&
			(i != 1 && i != num)
			) 
		{
			//std::cout << "num: " << num << " " << i;
			return false;
		}
	}
	return true;
}


