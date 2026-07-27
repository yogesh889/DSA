#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void printNumber(int a){
    if(a<=0){
        return;
    }
    printNumber(a-1); 
    cout<<a<<" ";
}
int main(){
    int n;
    cin>>n;

    auto start = high_resolution_clock::now();
    printNumber(n);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start);

    cout<<endl;

    cout << "Execution Time: "<< duration.count()<< " nanoseconds";
    return 0;
}