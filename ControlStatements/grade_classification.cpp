#include<bits/stdc++.h>
using namespace std;

int main(){

    int score;
    cout<<"Enter score: ";
    cin>>score;

    if(score < 0 && score >100){
        cout<<"Enter valid score";
    }

    if(score >= 90){
        cout<<"Grade A";
    }else if(score >= 75 && score < 90){
        cout<<"Grade B";
    }else if(score >= 50 && score < 75){
        cout<<"Grade C";
    }else if(score >= 35 && score <50){
        cout<<"Grade D";
    }else if(score < 35){
        cout<<"Fail";
    }

    return 0;
}