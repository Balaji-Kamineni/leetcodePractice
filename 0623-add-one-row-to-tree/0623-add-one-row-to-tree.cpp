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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(depth == 1)
       {
           TreeNode *currentNode = new TreeNode(val);
           currentNode->left = root;
           return currentNode;
       }
        queue<TreeNode*>q;
        if(root != NULL)
        q.push(root);
        while(!q.empty())
        {
            depth--;
            int n = q.size();
            vector<int> levelOrderNodes;
            while(n--)
            {
                TreeNode* currentNode = q.front();
                q.pop();
                if(depth == 1)
                {
                TreeNode *currentNode2 = new TreeNode(val);
                currentNode2->left = currentNode->left;
                currentNode->left= currentNode2;

                currentNode2 = new TreeNode(val);
                currentNode2->right = currentNode->right;
                currentNode->right = currentNode2;

                }
                else
                {
                     if(currentNode->left != NULL) q.push(currentNode->left);
                if(currentNode->right != NULL) q.push(currentNode->right);
                
                }
             }
           
        }
        return root;
    }
};