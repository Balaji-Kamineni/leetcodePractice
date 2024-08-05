class Solution {
    bool isVowel(char c)
    {
       
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') ? true : false;
    }
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ans = 0;
        int mx =0;
        vector<string> str;
        deque<char> dq;
        for(int i=0;i<k;i++)
        {    
           dq.push_back(s[i]);
            if(isVowel(s[i]))  mx++;
            ans = max(ans,mx);    
        }
        for(int i=k;i<n;i++)
        {
            dq.push_back(s[i]);
               if(isVowel(s[i]))
                  mx++;
              // auto fr=dq.front();
               if(isVowel(dq.front()))
                   mx--;
               dq.pop_front();
               ans= max(ans,mx);      
        }   
        return ans;
    }
};