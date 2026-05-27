// used to access an element in a vector using index and can also modify

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v = {1, 2, 3};

    cout<<v.at(2)<<endl;

    cout<<v[3]<<endl;

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}

// | Feature          | `v.at(2)`       | `v[2]`          |
// | ---------------- | --------------- | --------------- |
// | Bounds Checking  | ✅ Yes           | ❌ No            |
// | Safety           | Safer           | Faster          |
// | Throws Exception | ✅ Yes           | ❌ No            |
// | Performance      | Slightly slower | Slightly faster |
