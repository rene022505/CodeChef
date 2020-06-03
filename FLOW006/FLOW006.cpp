#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>


int main(void) {
	int T, N;
	std::string in;
	scanf("%d", &T);
	while (T--) {
		N = 0;
		std::cin >> in;
		for (int i = 0; i < in.length(); i++)
			N += in.at(i) - '0';
		printf("%d\n", N);
	}
}