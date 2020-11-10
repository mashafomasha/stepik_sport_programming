#include <iostream>
#include <vector>

void out(std::vector<int> & a) {
	for (int i = 1; i < a.size(); ++i) {
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}
