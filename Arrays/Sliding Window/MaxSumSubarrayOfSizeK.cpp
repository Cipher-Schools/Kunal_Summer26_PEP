//Problem : Maximum sum Subarray of size k
//Link : https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // Firstly find the sum of first window of size k
        int n=arr.size();
        int windowsum=0;
        int ans=0;
        for(int i=0;i<k;i++){
            windowsum+=arr[i];
        }
        ans=windowsum;
        //slide the window
        //starting index of the last window will be n-k-1
        //loop will run till n-k-1
        for(int i=0;i<n-k;i++){
            //remove the ith element
            windowsum-=arr[i];
            //add the i+kth element
            windowsum+=arr[i+k];
            ans=max(windowsum,ans);
        }
        return ans;
    }
};
