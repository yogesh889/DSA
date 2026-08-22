#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){

    //Approach 1;
    // int total = 0;
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         if(j == i){
    //             total += j;
    //         }
    //     }
    // }
    // cout<<"Total: "<<total<<endl;


    auto start = high_resolution_clock::now();
    //Approach 2
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum: "<<sum;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout<<endl;
    cout << "Execution Time: "<< duration.count()<< " microseconds";
    
    cout<<endl;

    //Approach 
    int total = n*(n+1)/2;
    cout<<total;
    cout<<endl;


    return 0;
}