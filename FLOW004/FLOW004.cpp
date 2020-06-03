#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>


int main(void) {
	int T;
	std::string in;

	scanf("%d", &T);

	while (T--) {
		std::cin >> in;
		printf("%d\n", ((in.at(0) - '0') + (in.at(in.length() - 1) - '0')));
	}

	return 0;
}