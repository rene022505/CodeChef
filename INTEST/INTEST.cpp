#include <iostream>


int main(void) {
	int n, k, temp, total = 0;
	scanf("%i %i", &n, &k);
	while (n--) {
		scanf("%i", &temp);
		if (temp % k == 0) total++;
	}
	printf("%i", total);
	return 0;
}