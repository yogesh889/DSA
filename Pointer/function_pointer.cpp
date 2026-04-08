#include<iostream>
using namespace std;

int greet(){
    cout << "Hello\n";
    return 0;
}

int main(){

    // function pointer
    int (*fp)() = greet;

    // calling function using pointer
    fp();

    return 0;
}