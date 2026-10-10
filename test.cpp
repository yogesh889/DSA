#include<bits/stdc++.h>
using namespace std;

void recursive(string inp, string op, int indx){
    if(indx == inp.size()){
        cout << op << endl;
        return;
    }

    op += inp[indx];              // include
    recursive(inp, op, indx+1);

    op.pop_back();                // backtrack
    recursive(inp, op, indx+1);  // exclude
}

int main(){
    string inp = "abc";
    string op = "";

    recursive(inp, op, 0);

    return 0;
}