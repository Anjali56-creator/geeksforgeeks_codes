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
void Rview(Node *root,int level,vector<int>&ans){
      if(!root)
      return ;
      if(level==ans.size())
      ans.push_back(root->data);
      Rview(root->right,level+1,ans);
      Rview(root->left,level+1,ans);
    }
      
    vector<int> rightView(Node *root) {
        //  code here
         vector<int>ans;
        Rview(root,0,ans);
        return ans;
    }
};