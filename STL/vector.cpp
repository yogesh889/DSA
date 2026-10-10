// vector::begin/end
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector = {1, 2, 3, 4};

    // cout<<myvector[4]<<endl;
    // cout<<myvector[5]<<endl;
    // cout<<myvector[6]<<endl;

    vector<int>::iterator it1 = myvector.begin();
    cout<<*it1<<endl;

    vector<int>::iterator it2 = myvector.end();
    cout<<*it2<<endl;

    vector<int>:: reverse_iterator it3 = myvector.rbegin();
    cout<<*it3<<endl;

    vector<int>:: reverse_iterator it4 = myvector.rend();
    cout<<*it4<<endl;

    int it5 = myvector.back();
    cout<<it5<<endl; 

    int it6 = myvector.front();
    cout<<it6<<endl;

    int it7 = myvector.at(2);
    cout<<it7<<endl;

    int capacity = myvector.capacity();
    cout<<"capacity: "<<capacity<<endl;

    vector<int> vec(2, 10);
    cout<<"vecCapacity: "<<vec.capacity()<<endl;
    vec.push_back(39);
    cout<<"vecCapacity after insertion: "<<vec.capacity()<<endl;
    cout<<"vecSize after insertion: "<<vec.size()<<endl;
    vec.shrink_to_fit();
    cout<<"vecCapacity after insertion and shrink to fit: "<<vec.capacity()<<endl;

    vec.reserve(24);
    cout<<"vecCapacity after reserve method"<<vec.capacity()<<endl;

    vec.resize(1);
    cout<<"vecSize after resize method: "<<vec.size()<<endl;

    vector<int> vec1;
    cout<<"check whether the vector is empty or not: "<<vec1.empty()<<endl;


    return 0;
}