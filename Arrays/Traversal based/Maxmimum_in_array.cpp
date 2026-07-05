// Problem: Largest Element in Array
// Link: https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

class Solution {
public:
    int largest(vector<int> &arr) {
        int maxi = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxi)
                maxi = arr[i];
        }

        return maxi;
    }
};
