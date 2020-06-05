#include "./../Mothership.h"

#include <iostream>


void flow002() {
	int T, A, B;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A % B);
	}
}