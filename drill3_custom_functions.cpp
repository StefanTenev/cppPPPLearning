#include <string>
static double cm_multiplier(std::string unit) {

	constexpr double m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_cm = 30;
	
	if (unit == "cm") {
		return 1;
	}
	else if (unit == "in") {
		return in_to_cm;
	}
	else if (unit == "m") {
		return m_to_cm;
	}
	else if (unit == "ft") {
		return ft_to_cm;
	}
	else {
		return 0;
	}
}