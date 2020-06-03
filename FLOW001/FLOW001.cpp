#include <iostream>


int main(void) {
	int T, A, B;
	scanf("%i", &T);
	while (T--) {
		scanf("%i %i", &A, &B);
		printf("%i\n", A + B);
	}
	return 0;
}