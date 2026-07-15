#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vec){
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec = {50, 30, 20, 25, 27, 29, 31};
    print(vec);

    vector<int>:: iterator it1;

    if(is_heap(vec.begin(), vec.end())){
        cout<<"heap";
    }else{
        cout<<"not heap";
    }
    cout<<endl;

    auto it = is_heap_until(vec.begin(), vec.end());

    cout<<endl;

    for(it1 = vec.begin(); it1 != it; it1++){
        cout<<*it1<<" ";
    }


    return 0;
}