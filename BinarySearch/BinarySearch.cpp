//Problem: Binary Search
// Link: https://leetcode.com/problems/binary-search/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;//we write like this to prevent integer overflow
            if(nums[mid]>target){
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else return mid;

        }
        return -1;

    }
};
