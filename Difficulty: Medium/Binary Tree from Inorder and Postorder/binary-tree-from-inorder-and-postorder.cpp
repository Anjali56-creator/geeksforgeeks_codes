/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int find(vector<int>& in, int target, int start, int end){
    for(int i=start;i<=end;i++){
        if(in[i]==target)
        return i;
    }
    return -1;
}
Node *tree(vector<int>& in, vector<int>& post,int instart, int inend, int index){
    if(instart>inend)
    return NULL;
    Node* root=new Node(post[index]);
    int pos=find(in,post[index],instart,inend);
    
    root->right=tree(in,post,pos+1,inend,index-1);
    root->left=tree(in,post,instart,pos-1,index-(inend-pos)-1);
    return root;
}
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
         return tree(inorder, postorder, 0, inorder.size() - 1,postorder.size() - 1);
    }
};