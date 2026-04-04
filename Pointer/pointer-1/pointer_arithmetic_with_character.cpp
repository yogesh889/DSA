#include<iostream>
using namespace std;

int main(){

    char ch = 'A';

    // instead of above expression we can also write this
    char str[] = "A";

    char* ad1 = &ch;
    // int* ad2 = &ch;

    // int*, float* print address
    // char* print as string
    // char* is assumed to be a C-style string

    // string will always end with null character ('\0')
    // in this char ch = 'A' -> we don't have \n (null ptr)
    // ['A'] [?] [?] [?] ...
    // No '\0' -> X
    // so cout starts printing characters from memrory


    // 'A' → prints
    // next memory → garbage → prints weird symbols
    // continues until it accidentally finds 

    // cout<<ad1<<endl; //address of ch
    cout<<*ad1<<endl;



    // this will only work when we have 
    cout<<(void*)ad1<<endl;

    // now we have used (void*) -> we are telling compiler
    // don't treat it as string. just treat it as in address.

    return 0;
}



// char* => reads memory like a sentence
// void* => just shows location on map