//Problem: 35. Search Insert Position
//Link: https://leetcode.com/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[mid]==target)return mid;

            else if(nums[mid]>target){
                ans=mid;//storing the greater element in a var
                high=mid-1;//moving to the left
            }
            else low=mid+1;
        }
        return ans;

    }
};
