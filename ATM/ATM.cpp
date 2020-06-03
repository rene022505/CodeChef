#include <iostream>
#include <string>


int main(void) {
	std::string in;
	std::getline(std::cin, in);

	int X;
	float Y;
	X = std::atoi(in.substr(0, in.find_first_of(" ")).c_str());
	Y = std::atof(in.substr(in.find_first_of(" ") + 1).c_str());
	if (X % 5 != 0) printf("%.2f", (Y));
	else {
		if (X + .5f > Y) printf("%.2f", (Y));
		else printf("%.2f", (Y - (X + .5f)));
	}
	return 0;
}