/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void pre(Node* root,vector<int>&ans){
      if(root==NULL) return;
      ans.push_back(root->data);
      pre(root->left,ans);
      pre(root->right,ans);
      
  }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        pre(root,ans);
        return ans;
    }
};