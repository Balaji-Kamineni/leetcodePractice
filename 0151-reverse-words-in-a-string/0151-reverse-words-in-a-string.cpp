class Solution {
public:
    string reverseWords(string s) {
     //   reverse(s.begin(),s.end());

        string ans;
        stack<string>st;
        for(int i=0;i<s.size();i++)
        {
            string word;
            if(s[i]==' ') continue;
                while(i<s.size() && s[i]!=' ')
                {
                    word+= s[i];
                    i++;
                   
                }
              st.push(word);

            }
        //     while (st.empty() == false) {
        //      ans+= st.top();
        //      st.pop();
       //  }
        
        while(!st.empty())
        {
            ans+=(st.top());
            st.pop();
            if(!st.empty())
            {
                ans+=" ";
            }
        }
        
        return ans;
        
    }
};