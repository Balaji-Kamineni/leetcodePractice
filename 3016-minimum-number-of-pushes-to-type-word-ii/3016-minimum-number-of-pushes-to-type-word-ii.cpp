class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size(),ans=0;
        map<char,int> mp;
        for(auto it:word) mp[it]++;
        vector<int> vc;
        for(auto it:mp) vc.push_back(it.second);
        sort(vc.rbegin(),vc.rend());
        for(int i=0;i<vc.size();i++)
        {
            if(i<8) ans+=vc[i];
            else if(i<16) ans+= (2*vc[i]);
            else if(i<24) ans+= (3*vc[i]);
            else if(i<32) ans+= (4*vc[i]);
        }
return ans;
        
    }
};