//Minimum size subarray Sum
// Link: https://leetcode.com/problems/minimum-size-subarray-sum/description/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int start=0;
        int end=0;
        int sum=nums[0];
        int n=nums.size();
        while(end<n){
            if(sum<target){
                if(end<n-1){
                    end++;
                    sum+=nums[end];
                }
                else break;
            }
            if(sum>=target){
                int size=end-start+1;
                ans=min(size,ans);
                sum-=nums[start];
                start++;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
