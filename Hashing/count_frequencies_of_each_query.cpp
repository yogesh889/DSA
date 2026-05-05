#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 1, 2, 2, 3, 3, 4, 4, 4, 4};
    int size = sizeof(arr)/sizeof(int);

    int q;
    cin>>q;

    for(int i=0; i<q; i++){
        int query;
        cin>>query;

        int count = 0;
        for(int j=0; j<size; j++){
            if(arr[j] == query){
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0;
}