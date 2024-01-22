```cpp
class Solution
{
    public:
    void preorder(Node*root,vector<vector<int>>&ans,vector<int>&temp,int sum,int currsum){
        //if(root==NULL)return;
        temp.push_back(root->key);
        if(currsum==sum){
            ans.push_back(temp);
        }
        if(root->left!=NULL)
        preorder(root->left,ans,temp,sum,currsum+root->left->key);
        if(root->right!=NULL)
        preorder(root->right,ans,temp,sum,currsum+root->right->key);
        temp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {   
        vector<vector<int>>ans;
        vector<int>temp;
        if(root==NULL)
        return ans;
        preorder(root,ans,temp,sum,root->key);
        return ans;
    }
};
```
