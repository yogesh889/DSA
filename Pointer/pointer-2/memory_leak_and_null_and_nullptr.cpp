#include<iostream>
using namespace std;

int main(){

    int* ptr = new int(10);
    // forgot delete → memory leak

    return 0;
}