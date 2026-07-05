// Problem: Find Numbers with Even Number of Digits
// Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int ans = 0;

        for (int num : nums) {

            int digits = 0;

            while (num) {
                digits++;
                num /= 10;
            }

            if (digits % 2 == 0)
                ans++;
        }

        return ans;
    }
};
