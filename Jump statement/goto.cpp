// C++ Progmra to demonstrate the use of goto
#include <iostream>
using namespace std;

int main()
{
    // this statement will be executed

    cout << "First Statement" << endl;
    int a, b;
    cin>>a>>b;

    cout<<a<<b<<endl;

    cout << "Second Statement" << endl; // will be skipped
    
    cout << "Third Statement" << endl;

    return 0;
}