/* Structure of a Tree Node
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
 int find(vector<int>& in, int target, int start, int end){
    for(int i=start;i<=end;i++){
        if(in[i]==target)
        return i;
    }
    return -1;
}
Node *tree(vector<int>& in, vector<int>& pre,int instart, int inend, int index){
    if(instart>inend)
    return NULL;
    Node* root=new Node(pre[index]);
    int pos=find(in,pre[index],instart,inend);
    root->left=tree(in,pre,instart,pos-1,index+1);
    root->right=tree(in,pre,pos+1,inend,index+(pos-instart+1));
    return root;
}
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        return tree(inorder, preorder, 0, inorder.size() - 1, 0);
    }
};