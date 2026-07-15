#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec = {30, 40, 50, 35, 75};

    make_heap(vec.begin(), vec.end());

    cout<<"maximum value: "<<vec.front()<<endl;

    return 0;
}