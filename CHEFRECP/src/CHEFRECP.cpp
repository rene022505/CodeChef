#include <iostream>
#include <map>
#include <vector>


int main(void) {
	int T, N;
	std::cin >> T;

	std::map<int, int> map;

	int in;

	char prev;

	std::vector<int> l;

	std::vector<int> input;

	for (int out = 0; out < T; out++) {
		std::cin >> N;

		map.clear(); // clear stuff
		l.clear();
		input.clear();

		for (int i = 0; i < N; i++) { // get numbers
			std::cin >> in;
			input.push_back(in);
		}

		// should be able to combine these but im not and i dont understand, too bad

		for (int i = 0; i < N; i++) { // check if number occured before with different inbetween
			for (int m = 0; m < i; m++) {
				if (input.at(i) == input.at(m)) {
					if (input.at(i) != input.at(i - 1 >= 0 ? i - 1 : 0)) {
						std::cout << "NO" << std::endl;
						goto safe;
					}
				}
			}
			if (std::map<int, int>::iterator(map.find(input.at(i))) != map.end()) // put amound of number occurences in map
				map.at(input.at(i))++;
			else
				map.insert(std::pair<int, int>(input.at(i), 1));
		}

		for (auto const& x : map) { // check map for same amount of occurence
			l.push_back(x.second);
			for (int n = 0; n < l.size() - 1; n++) {
				if (l.at(n) == x.second) {
					std::cout << "NO" << std::endl;
					goto safe;
				}
			}
		}

		std::cout << "YES" << std::endl;
	safe:
		continue;
	}

	return 0;
}