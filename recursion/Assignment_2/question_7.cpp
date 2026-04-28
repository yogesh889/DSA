	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
    // 1 2 3 4 5

#include<iostream>
using namespace std;

// Using recursion
void print_pattern(int n, int i){

    if(i > n){
        return;
    }

    for(int j=1; j<=i; j++){
        cout<<j<<" ";
    }
    cout<<endl;

    print_pattern(n, i+1);
}

int main(){

    int n;
    cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    print_pattern(n, 1);

    return 0;
}