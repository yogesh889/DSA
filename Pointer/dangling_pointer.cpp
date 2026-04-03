#include <iostream>

int main() {
    int* ptr = new int(10); // Dynamically allocate memory
    
    delete ptr; // Memory is freed, ptr is now a dangling pointer
    
    // ptr = nullptr; // Recommended: Set to nullptr to avoid dangling
    
    // DANGEROUS: Accessing deallocated memory
    // std::cout << *ptr << std::endl; 

    // cout << *ptr; // ❌ Undefined behavior

    // Now you're accessing freed memory → serious bug
    
    return 0;
}


// ✅ Best practice (important habit)

// Always reset the pointer after deleting:

// delete ptr;
// ptr = nullptr;

// Now:

// ptr is safe
// You won’t accidentally use invalid memory
