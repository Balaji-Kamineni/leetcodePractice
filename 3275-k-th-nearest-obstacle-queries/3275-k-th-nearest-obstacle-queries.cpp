class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        int n = queries.size();
       
        vector<int> vc(n,-1);
        if(k>n) return vc;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(abs(queries[i][0]) + abs(queries[i][1]));
            if(pq.size()>k) pq.pop();
            if(pq.size()==k)
                vc[i]=pq.top();
            else vc[i]=-1;
        
        }
        return vc;
         
    }
    
};
