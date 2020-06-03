#include <iostream>
#include <math.h>


int main(void) {
	int T, N;
	long long a;
	std::cin >> T;

	for (int out = 0; out < T; out++) {
		std::cin >> N;

		a = (long long)std::pow(2, std::floor(--N / 26.));

		int temp = N % 26;

		if (temp < 2) {
			std::cout << a << " 0 0" << std::endl;
		} else if (temp < 10) {
			std::cout << "0 " << a << " 0" << std::endl;
		} else {
			std::cout << "0 0 " << a << std::endl;
		}
	}

	return 0;
}