#include <iostream>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: the 0th and 1st numbers are 0 and 1 respectively
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int smalloutput = fibonacci(n-1) + fibonacci(n-2);
    
    // Recursive case: sum of the two preceding numbers
    return smalloutput;

}

int main() {
    int n;
    
    std::cout << "Enter the term number you want to find: ";
    std::cin >> n;
    
    // Input validation for negative numbers
    if (n < 0) {
        std::cout << "Fibonacci sequence is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "The " << n << "-th Fibonacci number is: " << fibonacci(n) << std::endl;
    }
    
    return 0;
}