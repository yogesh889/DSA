
#include<iostream>
using namespace std;

// void swap(int* a, int* b){
//     int temp = *a; 
//     *a = *b;
//     *b = temp;
// }

// void sort_negative_and_positive(int *arr, int n){
//     int j = 0;

//     for(int i=0; i<n; i++){
//         if(arr[i]<0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
// }

int main(){

    int arr[6] = {-1, 2, -3, 4, -5, 6};
    int n = 6;

    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arr[i] < 0 && arr[j] > 0){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // sort_negative_and_positive(arr, n);

    

    // Print result
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[6] = {-1, 2, -3, 4, -5, 6};

//     for(int i=0; i<6; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]<0){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }

//     return 0;
// }