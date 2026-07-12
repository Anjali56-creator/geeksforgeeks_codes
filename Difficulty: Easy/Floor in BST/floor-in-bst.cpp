/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  void pre(Node* root,vector<int>&ans){
      if(!root)
      return;
      ans.push_back(root->data);
      pre(root->left,ans);
      pre(root->right,ans);
  }
    int findMaxFork(Node* root, int k) {
        // code here
        int c=-1;
        vector<int>ans;
        pre(root,ans);
        for(int i=0;i<ans.size();i++){
            if(ans[i]<=k && ans[i]>c)
            c=ans[i];
        }
        return c;
    }
};