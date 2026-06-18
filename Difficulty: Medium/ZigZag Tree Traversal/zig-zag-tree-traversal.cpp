/*
Definition for Node
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
        stack<Node*>st1;
        stack<Node*>st2;
        st1.push(root);
        vector<int>ans;
        if(!root)
        return ans;
        while(!st1.empty() || !st2.empty()){
            if(!st1.empty()){
                while(!st1.empty()){
                    Node* temp=st1.top();
                    st1.pop();
                    ans.push_back(temp->data);
                   if(temp->left)
                   st2.push(temp->left);
                   if(temp->right)
                   st2.push(temp->right);
                }
            }
            else{
                while(!st2.empty()){
                    Node* temp=st2.top();
                    st2.pop();
                    ans.push_back(temp->data);
                     if(temp->right)
                      st1.push(temp->right);
                       if(temp->left)
                      st1.push(temp->left);
                   
                }
            }
        }
        return ans;
    }
};