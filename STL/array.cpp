#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 5> arr{1, 2, 3, 4, 5};
    cout<<"Array is: ";

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(auto it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
