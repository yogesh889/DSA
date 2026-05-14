#include<iostream>
using namespace std;

void print_number(int n){

    if(n == 0){
        cout<<endl;
        return;
    }

    cout << n << " ";

    print_number(n - 1);

    cout << n << " ";

}

int main(){

    int n;

    cin >> n;

    print_number(n);

    return 0;
}