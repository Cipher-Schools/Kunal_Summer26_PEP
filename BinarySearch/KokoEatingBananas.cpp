//Problem: Koko Eating bananas
// Link: https://leetcode.com/problems/koko-eating-bananas/
class Solution {
public:
    bool isPossible(vector<int>&piles, int h, int speed){
        int time=0;
        for(int i=0;i<piles.size();i++){
            int currtime=piles[i]/speed;
            if(piles[i]%speed!=0)currtime++;//if not completely divisible add 1 to current time
            time+=currtime;
            if(time>h)return false;
        }
        return time<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        int ans=-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(isPossible(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};
