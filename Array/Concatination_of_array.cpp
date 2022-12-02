// Concatination of array
// https://leetcode.com/problems/concatenation-of-array/


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int size=nums.size();
        for(int i=0; i<size; i++){
            ans.push_back( nums[i] );            
        }
        for(int j=0; j<size; j++){
            ans.push_back( nums[j] );            
        }

        return ans;
    }
};
