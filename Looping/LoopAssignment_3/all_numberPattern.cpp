#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    // 1. Simple number pattern
    cout << "1. Simple number pattern\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 2. Reversed number pattern
    cout << "\n2. Reversed number pattern\n";
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--) cout<<j<<" ";
        cout<<"\n";
    }

    // 3. Square of numbers
    cout << "\n3. Square of numbers\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<i<<" ";
        cout<<"\n";
    }

    // 4. Repeated number pattern
    cout << "\n4. Repeated number pattern\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<i<<" ";
        cout<<"\n";
    }

    // 5. Right-angled number triangle
    cout << "\n5. Right-angled number triangle\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 6. Inverted number triangle
    cout << "\n6. Inverted number triangle\n";
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 7. Floyd's triangle
    cout << "\n7. Floyd's triangle\n";
    int num=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++) cout<<num++<<" ";
        cout<<"\n";
    }

    // 8. Pyramid pattern
    cout << "\n8. Pyramid pattern\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<=4-i;s++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=i-1;j>=1;j--) cout<<j<<" ";
        cout<<"\n";
    }

    // 9. Diamond-shaped pattern
    cout << "\n9. Diamond pattern\n";
    int rows=4;
    for(int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=i-1;j>=1;j--) cout<<j<<" ";
        cout<<"\n";
    }
    for(int i=rows-1;i>=1;i--){
        for(int s=1;s<=rows-i;s++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=i-1;j>=1;j--) cout<<j<<" ";
        cout<<"\n";
    }

    // 10. Number pyramid (increment)
    cout << "\n10. Number pyramid (increment)\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<=4-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 11. Number pyramid (constant)
    cout << "\n11. Number pyramid (constant)\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<=4-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<i<<" ";
        cout<<"\n";
    }

    // 12. Hollow number pyramid
    cout << "\n12. Hollow pyramid\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<=4-i;s++) cout<<" ";
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==4) cout<<j<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }

    // 13. Zigzag pattern
    cout << "\n13. Zigzag pattern\n";
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }
    for(int i=2;i>=1;i--){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 14. Hourglass pattern
    cout << "\n14. Hourglass pattern\n";
    for(int i=n;i>=1;i--){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }
    for(int i=2;i<=n;i++){
        for(int s=1;s<=n-i;s++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 15. Pascal's triangle
    cout << "\n15. Pascal's triangle\n";
    for(int i=0;i<5;i++){
        int val=1;
        for(int s=1;s<=5-i;s++) cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val = val*(i-j)/(j+1);
        }
        cout<<"\n";
    }

    // 16. Sequence pattern
    cout << "\n16. Sequence pattern\n";
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=i;j++) cout<<k++<<" ";
        cout<<"\n";
    }

    // 17. Mirrored triangle
    cout << "\n17. Mirrored triangle\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<=4-i;s++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 18. Reverse pyramid
    cout << "\n18. Reverse pyramid\n";
    for(int i=4;i>=1;i--){
        for(int s=1;s<=4-i;s++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        cout<<"\n";
    }

    // 19. Diagonal pattern
    cout << "\n19. Diagonal pattern\n";
    for(int i=1;i<=4;i++){
        for(int s=1;s<i;s++) cout<<" ";
        cout<<i<<"\n";
    }

    // 20. Checkerboard pattern
    cout << "\n20. Checkerboard pattern\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<( (i+j)%2 )<<" ";
        }
        cout<<"\n";
    }

    return 0;
}