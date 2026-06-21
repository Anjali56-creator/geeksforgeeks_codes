/*
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
  bool bst(Node* root,int &prev){
      if(!root)
      return 1;
      bool l=bst(root->left,prev);
      if(l==0)
      return 0;
      if(root->data<=prev)
      return 0;
      prev=root->data;
      bst(root->right,prev);
  }
    bool isBST(Node* root) {
        // code here
        int prev=INT_MIN;
        return bst(root,prev);
    }
};