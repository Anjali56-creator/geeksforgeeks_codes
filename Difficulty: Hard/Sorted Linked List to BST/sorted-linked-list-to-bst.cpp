/* structure of Linked List Node
class LNode {
public:
    int data;
    LNode* next;

    LNode(int x) {
        data = x;
        next = nullptr;
    }
};

// Tree Node
class TNode {
public:
    int data;
    TNode* left;
    TNode* right;

    TNode(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  TNode* build(vector<int>&tree,int start,int end){
      if(start>end)
      return NULL;
      int mid=start+(end-start+1)/2;
      TNode *root=new TNode(tree[mid]);
      root->left=build(tree,start,mid-1);
      root->right=build(tree,mid+1,end);
      return root;
  }
    TNode *sortedListToBST(LNode *head) {
        // code here
        vector<int>tree;
        while(head){
            tree.push_back(head->data);
            head=head->next;
        }
        return build(tree,0,tree.size()-1);
    }
};