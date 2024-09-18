#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int l, int r) {
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int l, r;
        std::cin >> l >> r;
        int primeCount = countPrimes(l, r);
        int maxOperations = (primeCount < 3) ? primeCount : std::ceil((double)primeCount / 3); // Corrected line
        std::cout << maxOperations << std::endl;
    }
    return 0;
}