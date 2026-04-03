#include<iostream>
#include<vector>
using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st =0, end = arr.size()-1;

//     while(st <= end){
//         int mid = st + (end-st) /2;

//         if(tar > arr[mid]){
//             st = mid +1;
//         } else if(tar < arr[mid]){
//             end = mid - 1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }



//recursive approach..
int recBinarySearch(vector<int> arr ,int tar ,int st , int end){
    if(st <= end){

        int mid = st + (end - st)/2;

        if(tar < arr[mid]){
            return recBinarySearch(arr, tar, st, mid-1);
        }else if(tar > arr[mid]){
            return recBinarySearch(arr, tar, mid+1, end);
        }else{
            return mid;
        }
        
    }
}
int main(){
    vector<int> arr1= {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar1 = 12;
    int st1 = 0;
    int end1 = arr1.size()-1;


    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even
    int tar2 = 40;
    int st2 = 0;
    int end2 = arr2.size()-1;

    int ans = recBinarySearch( arr1, tar1, st1, end1 );
    cout<<ans<<endl;
    return 0;
}