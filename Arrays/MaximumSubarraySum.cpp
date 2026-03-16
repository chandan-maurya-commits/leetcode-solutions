//BruteForce 

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};

//     int maxSum = INT_MIN;

//     for(int st =0; st<n; st++){
//        int currSum = 0;
//         for(int end=st ; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
          
//         }
//     }
//     cout << "max subArray sum = "<<maxSum<<endl;
//     return 0;
// }



//Kadane's Algorithm best approach

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      
        int maxSum =INT_MIN;
        int currSum = 0;

        for(int val : nums){
            currSum +=  val;
            maxSum = max(maxSum, currSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};