class Solution {
public:
    // Function to check if a single number is prime (brute force)
    bool isPrime(int num) {
        // Numbers less than or equal to 1 are not prime
        if (num <= 1) return false;

        // Check divisibility from 2 up to num-1
        for (int i = 2; i < num; i++) {
            // If num is divisible by i, it's not prime
            if (num % i == 0)
                return false;
        }

        // If no divisor found, number is prime
        return true;
    }

    // Function to count how many prime numbers are less than n using Sieve of Eratosthenes
    int countPrimes(int n) {
        // If n is 2 or less, no primes exist below n
        if (n <= 2) return 0;

        // Initialize a boolean array to track primes; assume all numbers are prime initially
        vector<bool> isPrime(n, true);
        
        // 0 and 1 are not prime numbers
        isPrime[0] = isPrime[1] = false;

        // Iterate over numbers from 2 to sqrt(n)
        // Only need to check up to square root of n
        for (int i = 2; i * i < n; i++) {
            // If i is still marked as prime

            if (isPrime[i]) {

    // Start marking multiples of i from i*i.
    // Smaller multiples (like i*2, i*3, ..., i*(i-1)) were already marked by smaller primes.

    // For example, when i=3, multiples like 6 (2*3) are already marked when i=2 loop ran.
    // j increments by i to mark all multiples of i (i*i, i*i + i, i*i + 2i, ...)
    // So when i=2, multiples like 4, 6, 8, 10, 12 are all marked as not prime.
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Count all numbers still marked prime
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        // Return the count of primes less than n
        return count;
    }
};
