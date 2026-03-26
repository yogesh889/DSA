#include<iostream>
using namespace std;

int main(){

    char arr[] = {'h', 'e', 'l', 'l', 'o'};

    int st = 0;
    int en = (sizeof(arr)/sizeof(arr[0]))-1;

    while(st <= en){
        char temp = arr[en];
        arr[en] = arr[st];
        arr[st] = temp;
        st++;
        en--;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}