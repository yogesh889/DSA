#include<iostream>
using namespace std;

int main(){

    int* p = new int(10);
    int* q = new int(20);
    int* a = new int(30);
    int* b = new int(40);

    delete p;

    return 0;
}