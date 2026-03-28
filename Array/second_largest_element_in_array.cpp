#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int S_largest = INT_MIN;

    for(int i = 0; i < n; i++){

        if(arr[i] > largest){
            S_largest = largest;
            largest = arr[i];
        }else if(arr[i] > S_largest && arr[i] != largest){
            S_largest = arr[i];
        }
    }

    if(S_largest == INT_MIN)
        cout << -1 << endl;
    else
        cout << S_largest << endl;

    return 0;
}