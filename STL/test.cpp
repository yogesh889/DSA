#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> vec;
    vec = {1, 2, 3};

    // vec[3] = 4;
    vec.push_back(4);


    // vector<int> vect = {1, 2, 3};

    // template_class<Type_name> object(size, element);
    // vector<int> vec(3, 5);

    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

    cout<<*vec.begin()<<endl;
    cout<<*(vec.end()-1)<<endl;

    // 1           2         3     
    // begin()                     end() 


    for(auto it=vec.begin(); it!=vec.end(); it++){
        if(*it == 3){
            vec.pop_back();
        }
        cout<<*it<<" ";
    }

    cout<<endl;

    vector<int> v;

    v.assign(4, 5);
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    vector<int> vec1 = {4, 3, 2, 1};
    // vec1.push_back(1);
    // vec1.push_back(1);

    // cout<<vec1.at(3)<<endl;
    // cout<<vec1[7]<<endl;

    // cout<<vec1.back()<<endl;

    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;

    cout<<*vec1.cbegin()<<endl;

    vec1.clear();

    for(auto it=vec1.cbegin(); it!=vec1.cend(); it++){
        // *it += 2;
        // *it = 5;
        cout<<*it<<" ";
    }

    cout<<vec1[0]<<" ";
    cout<<vec1[1]<<" ";
    cout<<vec1[2]<<" ";

    cout<<endl;
    cout<<*vec1.cend()<<endl;

    int a = 5;
    int b = 7;

    // int temp = a;
    // a = b; 
    // b = temp;
    // cout<<a<<" "<<b<<endl; 

    // swap(a, b);

    // cout<<"a: "<<a<<" "<<"b: "<<b<<endl;

    sort(vec1.begin(), vec1.end());

    for(auto it=vec1.begin(); it!=vec1.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}