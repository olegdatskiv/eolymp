#include <iostream>
#include <cmath>

int main() {
	long long unsigned n;
	std::cin >> n;
	std::cout << 3 * long(pow(2, n - 1));
	return 0;
}