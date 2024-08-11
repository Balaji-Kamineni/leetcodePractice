class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(),ans=0;
        vector<int> lOne(n,0);
        vector<int> rOne(n,0);
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==1)
            lOne[i]=lOne[i-1]+1;
        }
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]==1)
            rOne[i]=rOne[i+1]+1;
        }
        for(int i=0;i<n;i++)
        {
            ans=max(ans,lOne[i]+rOne[i]);
        }
        return ans;
        
        
    }
};