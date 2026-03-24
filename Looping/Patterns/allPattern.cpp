#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // 1. Square
    cout << "1. Square\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout << "* ";
        cout << endl;
    }

    // 2. Right-angled triangle
    cout << "\n2. Right Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    // 3. Inverted triangle
    cout << "\n3. Inverted Triangle\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    // 4. Left-angle triangle
    cout << "\n4. Left Triangle\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    // 5. Inverted Left-angle triangle
    cout << "\n5. Inverted Left Triangle\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    // 6. Pyramid
    cout << "\n6. Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++) cout << "* ";
        cout << endl;
    }

    // 7. Inverted Pyramid
    cout << "\n7. Inverted Pyramid\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++) cout << "* ";
        cout << endl;
    }

    // 8. Diamond
    cout << "\n8. Diamond\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++) cout << "* ";
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++) cout << "* ";
        cout << endl;
    }

    // 9. Hollow Square
    cout << "\n9. Hollow Square\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    // 10. Hollow Triangle
    cout << "\n10. Hollow Triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==n || j==1 || j==i) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    // 11. Hollow Pyramid
    cout << "\n11. Hollow Pyramid\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++){
            if(i==1 || i==n || j==1 || j==2*i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    // 12. Hollow Diamond
    cout << "\n12. Hollow Diamond\n";
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout << "  ";
        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    // 13. Butterfly
    cout << "\n13. Butterfly\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout << "* ";
        for(int s=1;s<=2*(n-i);s++) cout << "  ";
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout << "* ";
        for(int s=1;s<=2*(n-i);s++) cout << "  ";
        for(int j=1;j<=i;j++) cout << "* ";
        cout << endl;
    }

    return 0;
}