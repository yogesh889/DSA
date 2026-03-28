#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n] = {};

    cout<<endl;

    cout<<"Enter elements of array: ";
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    return 0;
}