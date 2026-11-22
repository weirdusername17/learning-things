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
    std::vector<long> primes;
    long limit = 1000000;

    for (long i = 2 ; i < limit ; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    long max_length = 0;
    long best_prime = 0;

    for (size_t start = 0 ; start < primes.size() ; ++start) {
        long sum = 0;
        for (size_t end = start; end < primes.size(); ++end) {
            sum += primes[end];
            
            if (sum >= limit) {
                break;
            }

            long length = (end - start + 1);
            
            if (length > max_length && isPrime(sum)) {
                max_length = length;
                best_prime = sum;
            }
        }
    }

    std::cout << "Sum: " << best_prime << " | " << max_length << " terms\n";

    return 0;
}