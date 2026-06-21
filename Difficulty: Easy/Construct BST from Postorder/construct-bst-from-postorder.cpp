/* Structure of tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
Node* BST(vector<int>&post,int &index,int lower,int upper){
    if(index<0 || post[index]<lower || post[index]>upper)
    return NULL;
    Node* root=new Node(post[index--]);
    root->right=BST(post,index,root->data,upper);
    root->left=BST(post,index,lower,root->data);
    
    return root;
}
    Node* constructTree(vector<int>& post) {
        // code here
        int size=post.size();
         int index=size-1;
        return BST(post,index,INT_MIN,INT_MAX);
    }
};