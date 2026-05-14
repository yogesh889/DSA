#include<iostream>
using namespace std;

bool identity_matrix(int arr[][3], int m, int n){
    if(m != n){
        return false;
    }

    for(int i=0; i<m; i++){
        if(arr[i][i] == 1){
            return false;
        }
    }
    return true;
}

int main(){

    int arr[3][3] = {
        {1, 0, 0}, 
        {0, 1, 0}, 
        {0, 0, 1}
    };

    bool ans = identity_matrix(arr, 3, 3);

    cout<<ans<<endl;

    return 0;

}