#include <iostream>

int main() {
    int* ptr = new int(10); // Dynamically allocate memory
    
    delete ptr; // Memory is freed, ptr is now a dangling pointer
    
    // ptr = nullptr; // Recommended: Set to nullptr to avoid dangling
    
    // DANGEROUS: Accessing deallocated memory
    // std::cout << *ptr << std::endl; 
    
    return 0;
}
