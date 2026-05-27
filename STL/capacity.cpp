// used to access an element in a vector using index and can also modify

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v = {1, 2, 3, 4, 5, 6};

    cout<<v.capacity()<<endl;

    return 0;
}

