As we know the formula n^(2) + n + 41 produces 40 primes for consecutive integer values between 0 and 39 (inclusive)

The problem asks about the formula n^(2) + an + b, where abs(a) < 1000, abs(b) <= 1000 

Find the coefficients a and b for which the expression produces the most number of primes for consecutive integer values 0 between n (inclusive) 

If we start from n = 0, the b values always have to be prime.

I stored the prime numbers between 2 and 1000 in a vector.
For the values of a, I used brute force to check all possible combinations which make n^(2) + an + b prime.