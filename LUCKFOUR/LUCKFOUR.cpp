#include <iostream>
#include <string>


int main(void) {
	int T, a;
	std::string in;

	scanf("%d", &T);

	while (T--) {
		a = 0;
		std::cin >> in;
		for (char c : in)
			if (c == '4')
				a++;
		printf("%d\n", a);
	}

	return 0;
}