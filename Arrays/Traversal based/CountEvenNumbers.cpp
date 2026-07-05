// Problem: Count Even Numbers
// Link: https://www.geeksforgeeks.org/problems/count-even-odd/1

class Solution {
public:
    int countEven(vector<int>& arr) {
        int count = 0;

        for (int num : arr) {
            if (num % 2 == 0)
                count++;
        }

        return count;
    }
};
