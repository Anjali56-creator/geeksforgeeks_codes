/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  void leftSub(Node* root,vector<int>&ans){
      if(!root || (!root->left && !root->right))
      return;
      ans.push_back(root->data);
      if(root->left)
      leftSub(root->left,ans);
      else
      leftSub(root->right,ans);
      
  }
  void rightSub(Node*root,vector<int>&ans){
      if(!root || (!root->left && !root->right))
      return ;
      if(root->right)
      rightSub(root->right,ans);
      else
      rightSub(root->left,ans);
      ans.push_back(root->data);
  }
  void leaf(Node *root,vector<int>&ans){
  if(!root)
  return;
  if(!root->left && !root->right){
      ans.push_back(root->data);
      return;
  }
  leaf(root->left,ans);
  leaf(root->right,ans);
  }
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        ans.push_back(root->data);
        leftSub(root->left,ans);
        if(root->left || root->right)
        leaf(root,ans);
        rightSub(root->right,ans);
        return ans;
        
    }
};