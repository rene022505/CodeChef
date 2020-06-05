#define _CRT_SECURE_NO_WARNINGS

#include "./../Mothership.h"

#include <iostream>
#include <string>


void flow006() {
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