#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> students;

    students[103] = "Aman";
    students[104] = "Ranjan";
    students[105] = "Arman";
    students[106] = "Amishi";
    students[107] = "rahul";
    
    for(auto x: students){
        cout<<x.first<<" -> "<<x.second<<endl;
    }

    return 0;
}