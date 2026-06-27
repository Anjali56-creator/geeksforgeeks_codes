/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int count(Node* root){
      if(!root)
      return 0;
      return 1+count(root->left)+count(root->right);
  }
  bool CBT(Node* root,int index,int total_nodes){
      if(!root)
      return 1;
      if(index>=total_nodes)
      return 0;
      
      return CBT(root->left, 2*index+1, total_nodes) &&
       CBT(root->right, 2*index+2, total_nodes);
      
      
  }
  
bool MaxHeap(Node* root) {

    if(root == NULL)
        return true;

    if(root->left && root->data < root->left->data)
        return false;

    if(root->right && root->data < root->right->data)
        return false;

    return MaxHeap(root->left) && MaxHeap(root->right);
}
  
    bool isHeap(Node* tree) {
        // code here
        //count number of nodes
        int num=count(tree);
        //CBT
        
        if (!CBT(tree, 0, num))
            return false;
        //Parent >=child
        
        return MaxHeap(tree);
    }
};