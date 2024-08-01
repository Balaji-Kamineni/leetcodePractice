class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        long long pr=1,zr=0;
        for(auto it:nums)
        {
            if(it==0)  zr++;
            else pr*=it;
        }
        if(zr>1) return v;
        for(int i=0;i<n;i++)
        {
            if(zr==1)
            {
                if(nums[i]==0)
                v[i]=pr;
            }
            else 
             v[i]=pr/nums[i];
        }
      return v;
        
    }
};