#include <iostream>

using namespace std;

int main() {
    const long long limit = 4000000;
    long long a = 1;
    long long b = 2;
    long long even_sum = 0;

    while (b <= limit) {
        if (b % 2 == 0) {
            even_sum += b;
        }
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << even_sum << '\n';
    return 0;
}