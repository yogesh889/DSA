#include<iostream>
using namespace std;

int main(){

    int* ptr4 = new int(10);

    int** ptr5 = &ptr4;

    cout<<ptr4<<endl;
    cout<<*ptr4<<endl;
    cout<<ptr5<<endl;
    cout<<*ptr5<<endl;
    cout<<**ptr5<<endl;
    

    return 0;
}