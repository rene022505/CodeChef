#include <iostream>
#include <map>
#include <string>
#include <vector>


int main(void) {
	std::string temp;
	int T, N;
	std::getline(std::cin, temp);

	T = std::atoi(temp.c_str());

	std::map<char, int> map;
	std::map<char, int>::iterator it;

	std::string in;

	char prev;

	std::vector<int> l;

	std::vector<int> lenght;
	std::vector<std::string> input;

	for (int i = 0; i < T; i++) {
		std::getline(std::cin, temp);

		lenght.push_back(std::atoi(temp.c_str()) * 2);

		std::getline(std::cin, in);
		input.push_back(in);
	}

	for (int j = 0; j < T; j++) {
		N = lenght.at(j);
		in = input.at(j);

		for (int i = 0; i < N; i += 2) {
			for (int m = 0; m < i; m += 2) {
				if (in.at(i) == in.at(m) && in.at(i) != in.at(i - 2 >= 0 ? i - 2 : 0)) {
					std::cout << "NO" << std::endl;
					goto safe;
				}
			}

			it = map.find(in.at(i));
			if (it != map.end())
				map.at(in.at(i))++;
			else
				map.insert(std::pair<char, int>(in.at(i), 1));
		}

		for (auto const& x : map) {
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