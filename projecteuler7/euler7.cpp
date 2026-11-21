#include <iostream>
#include <vector>

bool isPrime(long x) {
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;

    for (long i = 5; i <= x / i; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
	size_t n = 10001;
	std::vector<long> p(n);

	p[0] = 2;
	p[1] = 3;
	size_t count = 2;
	long candidate = 5;

	while (count < n) {
    	if (isPrime(candidate)) {
        	p[count++] = candidate;
    	}
    	candidate += 2;
	}

	std::cout << p[n - 1] << "\n";

    return 0;
}
