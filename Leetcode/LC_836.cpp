#include<bits/stdc++.h>
using namespace std;

class Solutions{
    public: 
        bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2){

            //X-axis overlap
            int xOverlap = min(rec1[2], rec1[2]) > max(rec1[0], rec1[0]);

            //Y-axis overlap
            int yOverlap = min(rec2[3], rec2[3]) > max(rec2[1], rec2[1]);

            return xOverlap && yOverlap;
        }

};

int main(){
    Solutions obj;

    vector<int> rec1 = {0, 0, 2, 2};
    vector<int> rec2 = {1, 1, 3, 3};

    bool result = obj.isRectangleOverlap(rec1, rec2);
    
    if(result){
        cout<<"Rectangle overlap";
    }else{
        cout<<"Rectangle do not overlap";
    }

    return 0;
}