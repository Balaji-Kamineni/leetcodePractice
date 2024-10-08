class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn=prices[0];
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,prices[i]);
            ans= max(ans,prices[i]-mn);
        }
        return ans;
        
    }
};