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

int main(){

	std::vector<long> b;
	
	for (long i = 2; i < 1000; i++) {
		if (isPrime(i)) {
			b.push_back(i);
		}
	}

	long best_len = 0;
	long best_prod = 0;

	for (long b_val : b) {
		for (long a = -999; a < 1000; a++) {
			long n = 0;
			while (isPrime(n * n + a * n + b_val)) {
				++n;
			}

			if (n > best_len) {
				best_len = n;
				best_prod = a * b_val;
			}
		}
	}

	std::cout << "Longest sequence: " << best_len << ", product: " << best_prod << "\n";


	return 0;
}