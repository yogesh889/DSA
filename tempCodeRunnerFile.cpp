#include<bits/stdc++.h>
using namespace std;
void recursive(string inp, string op, int indx){
    if(indx == inp.size()){
        cout<<op;
    }
    op += inp[indx];
    recursive(inp,op,indx+1);
    // op -= inp[indx];
    recursive(inp,op,indx+1);

}
int main(){
    string inp = "abc";
    string op = "";
    recursive(inp,op,0);
    

    return 0;
}
