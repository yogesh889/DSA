#include<iostream>
#include<vector>
using namespace std;

int main(){

    // int arr1[5];
    // int* arr2[5];

    // int* arr4 = new int[5];

    // arr4[0] = 5;
    // cout<<arr4[0]<<endl;

    vector<int> vec;
    vec.push_back(20);
    vec.push_back(30);
    cout<<vec.back();
    vec.pop_back();
    cout<<vec.back();

    return 0;
}