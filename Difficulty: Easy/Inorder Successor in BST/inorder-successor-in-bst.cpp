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
  
  void in(Node*root,vector<int>&ans){
      if(root==NULL) return;
      in(root->left,ans);
      ans.push_back(root->data);
      in(root->right,ans);
      
  }
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        vector<int>ans;
        in(root,ans);
    for(int i=0;i<ans.size()-1;i++){
        if(ans[i]==k->data)
        return ans[i+1];
    }
    return -1;
    }
};