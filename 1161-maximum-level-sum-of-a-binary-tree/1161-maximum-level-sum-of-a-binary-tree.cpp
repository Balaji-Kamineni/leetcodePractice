/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int mx=INT_MIN,ans=0;
       vector<int> v;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty())
        {
            int sum=0;
            int n=q.size();
            while(n--)
            {
                auto fr= q.front();
                q.pop();
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
                sum+= fr->val;
            }
           v.push_back(sum);
            
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
            if(v[i]>mx)
            {
               mx=max(v[i],mx);
                ans=i;
            }
            
        }
        return ans+1;
        
    }
};