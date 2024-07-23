class Solution {
public:
static bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    return (a.second==b.second)?a.first>b.first : a.second<b.second;
}
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int,int> mp;
        for(auto it:nums) mp[it]++;
        vector<pair<int,int>> vc;
        for(auto it:mp) vc.push_back({it.first,it.second});
        sort(vc.begin(),vc.end(),cmp);
        for(auto it:vc)
        {
            int m = it.second;
            while(m-->0)
            {
                ans.push_back(it.first);
            }
        }
     return ans;
        
    }
};