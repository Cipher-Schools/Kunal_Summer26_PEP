// Problem: 34. Find First and Last Position of Element in Sorted Array
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1;//we will move on the left to get the first occurence
            }
            else if(nums[mid]<target){//move to right
                low=mid+1;
            }
            else{//move to left
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;//we will move on the right to get the last occurence
            }
            else if(nums[mid]<target){//move to right
                low=mid+1;
            }
            else{//move to left
                high=mid-1;
            }
        }
        return {first,last};

    }
};
