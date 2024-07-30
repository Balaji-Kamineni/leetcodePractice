class Solution {
public:
    int minimumDeletions(string s) {
         int cnt = 0;
        int ans = 0;
        for(char& c : s)
        {
            if(c == 'b')
                cnt++;
            else
                ans = min(ans + 1, cnt);
        }
        return ans;
    }
};