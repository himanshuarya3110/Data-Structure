// Maximum Subarray
// https://leetcode.com/problems/maximum-subarray/


//Using Kadane's Algo

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int sum=0;
      int maxi=nums[0];
      for(int i=0;i<nums.size();i++){
          //step 1
          sum=sum+nums[i];
          //step 2
          maxi=max(maxi,sum);
          //step 3
          if(sum<0)
            sum=0; 
      }
      return maxi;  
    }
};
