// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int sum = 0;
//         int n = nums.size();
//         // int totalSum = n(n+1)/2;

//         for(int i=0; i<n; i++){
//             sum += nums[i];
//         } 

//         int totalSum = n*(n+1)/2;
        
//         return totalSum - sum;
//     }
// };



// better approach ..XOR method

class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int ans = nums.size();

       for(int i=0; i<nums.size(); i++){
            ans ^= i;
            ans ^= nums[i];
       }

        return ans;
    }
};
