//https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cur=0;
        int mx=nums[0];
       
        for(int i=0;i<nums.size();i++){ 
            cur+=nums[i];
              mx=max(mx,cur);
           if(cur<0)
            cur=0;
          
        }
        return mx;
    }
};
