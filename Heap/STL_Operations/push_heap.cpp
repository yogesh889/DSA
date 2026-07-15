#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &vec){
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> vec = {23, 54, 65, 28, 22};

    make_heap(vec.begin(), vec.end());

    print(vec);

    vec.push_back(70);      

    print(vec);

    push_heap(vec.begin(), vec.end());
    print(vec);


    return 0;
}