#define _CRT_SECURE_NO_WARNINGS

#include "./../Mothership.h"

#include <iostream>
#include <string>


void flow007() {
	int T;
	std::string in;

	scanf("%d", &T);

	bool now = false;

	while (T--) {
		now = false;
		std::cin >> in;
		for (int i = in.length() - 1; i >= 0; i--) {
			if (in.at(i) == '0' && !now) continue;
			else now = true;
			printf("%c", in.at(i));
		}
		printf("\n");
	}
}