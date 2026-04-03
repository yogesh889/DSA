// #include<iostream>
// using namespace std;

// int main(){

//     int x = 10;
//     int* ptr = &x;

//     ptr++;  // moves to next memory location

//     cout<<ptr<<endl;
//     cout<<x<<endl;

//     return 0;
// }

#include<iostream>
using namespace std;
 
int main(){
        int x=10;
        int *p= &x;

        // cout<<"Value of p before increment: "<<p<<endl;
        // p++;
        // cout<<"Value of p after increment: "<<p<<endl;
        (*p)++;
        cout<<"Value of p after increment: "<<p<<endl;
 
        // cout<<"Value of x: "<<x<<endl;
        
        cout<<"Value of *p: "<<*p;
        return 0;
}
 