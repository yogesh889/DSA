// Assign: assign new content to vector and replace the previous one and modifying its size 
// accordingly

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v = {1, 2, 3};

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    v.assign(3, 100);

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}