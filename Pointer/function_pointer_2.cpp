#include<iostream>
using namespace std;

int add(int a, int b){ return a + b; }
int mul(int a, int b){ return a * b; }

int main(){

    int (*fp)(int, int);

    fp = add;
    cout << fp(2,3) << endl;  // 5

    fp = mul;
    cout << fp(2,3) << endl;  // 6
}


// 👉 Same pointer → different function
// 👉 Like switching apps on phone 📱


// int *fp(int, int);  ===>> wrong
// int *fp(int, int);  ===>> correct


// fp = add;
// fp = &add;

// Normal pointer → stores data address
// Function pointer → stores function address