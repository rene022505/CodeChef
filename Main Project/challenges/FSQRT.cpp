#include "./../Mothership.h"

#include <iostream>


void fsqrt() {
	int T, N, i;

	scanf("%d", &T);

	while (T--) {
		i = 1;
		scanf("%d", &N);
		while (i * i < N) i++;
		if (i * i != N) i--;
		printf("%d\n", i);
	}
}