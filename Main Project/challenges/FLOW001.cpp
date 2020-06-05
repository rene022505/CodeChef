#include "./../Mothership.h"

#include <iostream>


void flow001() {
	int T, A, B;
	scanf("%i", &T);
	while (T--) {
		scanf("%i %i", &A, &B);
		printf("%i\n", A + B);
	}
}