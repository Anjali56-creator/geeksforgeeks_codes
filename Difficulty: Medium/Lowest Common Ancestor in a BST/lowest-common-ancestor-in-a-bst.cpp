/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  Node* BST(Node* root,Node* p,Node*q){
    if(!root)
    return NULL;
    if(root->data>p->data && root->data>q->data)
    return BST(root->left,p,q);
    else if(root->data<p->data && root->data<q->data)
    return BST(root->right,p,q);
    else return root;
}
    Node* LCA(Node* root, Node* p, Node* q) {
        // code here
         return BST(root,p,q);
    }
};