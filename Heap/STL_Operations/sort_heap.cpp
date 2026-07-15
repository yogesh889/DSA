#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vec){
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec = {5, 87, 35, 12, 90, 34, 44};
    print(vec);

    make_heap(vec.begin(), vec.end());
    print(vec);

    sort_heap(vec.begin(), vec.end());
    print(vec);

    return 0;
}