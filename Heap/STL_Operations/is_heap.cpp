#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {3, 23, 43, 54, 20, 19};

    if(is_heap(vec.begin(), vec.end())){
        cout<<"The range is in heap";
    }else{
        cout<<"the range is not in a heap";
    }

    return 0;
}