#include <iostream>

int factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive step
}

int main() {
    std::cout << factorial(5); // Output: 120
    return 0;
}
