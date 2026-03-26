#include<iostream>
using namespace std;


// *
// * *
// * * * 
// * * * * 
// * * * * *  

void right_angled_triangle(){
    int n;
    cin>>n;

    for(int row = 1; row<=n; row++){
        for(int col = 1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
}


//         *
//       * *
//     * * * 
//   * * * *
// * * * * * 
void left_angle_triangle(){
    int n;
    cin>>n;
    for(int row = 1; row<=n; row++){
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

}

// *                 *
// * *     * *     * * 
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 *

void butter_fly(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int s=1; s<=2*n-2*i; s++){
            cout<<" ";
        }
        // for(int j=2*n-i+1; j<=2*n; j++){
        //     cout<<"*";
        // }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // for(int i=n-1; i>=1; i--){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int s=1; s<=2*n-2*i; s++){
    //         cout<<" ";
    //     }
    //     for(int j=2*n-i+1; j<=2*n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}



int main(){

    right_angled_triangle();
    cout<<endl;

    left_angle_triangle();
    cout<<endl;

    butter_fly();

    return 0;
}