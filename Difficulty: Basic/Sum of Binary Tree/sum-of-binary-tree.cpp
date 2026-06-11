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
    int sumBT(Node* root) {
        // code here
        if(root == NULL) return 0;
        return (root -> data + sumBT(root->left) + sumBT(root->right));
    }
};