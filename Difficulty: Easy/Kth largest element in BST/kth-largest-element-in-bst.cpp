/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
  void klargest(Node* root,int &sum,int &k){
    if(!root)
    return;
    klargest(root->right,sum,k);
    k--;
    if(k==0)
    sum=root->data;
    if(k<=0)
    return;
    klargest(root->left,sum,k);
}
    int kthLargest(Node *root, int k) {
        // Your code here
      int sum=0;
        klargest(root,sum,k);
        return sum;
    }
};