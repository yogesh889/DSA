#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,4,7};
    int arr2[] = {2,5,8};

    int n1 = 3, n2 = 3;
    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }else{
            cout << arr2[j] << " ";
            j++;
        }
    }

    while(i < n1){ 
        cout << arr1[i] << " ";
        i++;
    }
    while(j < n2){
        cout << arr2[j] << " ";
        j++;
    }
}