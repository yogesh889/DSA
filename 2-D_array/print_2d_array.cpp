#include<iostream>
using namespace std;

void print_array1(int arr1[]){ // int arr[] this similar to int* arr only in 1d array
    for(int i=0; i<3; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}


void print_array2(int (*arr2)[3]){ // int arr[][] ==> int** arr ===>> wrong
                                  // int arr[][] ==> int (*arr)[] ===>> right
                                  // pointer to array of 3 units
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr2[row][col]<<" ";            
        }
        cout<<endl;
    }
}

int main(){

    int arr1[3] = {3, 4, 5};
    int arr2[3][3] = {{2, 3, 4}, {1, 2, 3}, {4, 5, 6}};

    // cout<<arr<<endl; //address

    print_array1(arr1);
    print_array2(arr2);

    // int arr[3][3];

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //         cin>>arr[row][col];
    //     }
    // }

    // cout<<endl;

    // for(int row=0; row<3; row++){
    //     for(int col=0; col<3; col++){
    //         if(arr[row][col] == 7){
    //             cout<<row<<" "<<col;            
    //         }
    //         // cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}