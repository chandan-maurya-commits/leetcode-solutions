#include<iostream>
#include<vector>
using namespace std;

int main(){
    //first method 
    vector<int> vec;
//    // vec.push_back(4);
//   // cout<<"size = "<<vec.size()<<endl;

//     //second method
//     vector<int> vec1 = {1,2,3};
//     vec1.pop_back();
//     cout<<"size = "<<vec1.size()<< endl;

//     //third method
//     vector<int>vec2(4,3);
//     cout<<vec2.front()<<endl;

    //capacity & size
    vec.push_back(0);
    vec.push_back(1);

    vec.push_back(2);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    return 0;
}