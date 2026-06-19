/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*>s;
        s.push(node);
        vector<int>ans;
        while(!s.empty()){
            Node *temp=s.top();
            s.pop();
            ans.push_back(temp->data);
            if(temp->left)
            s.push(temp->left);
            if(temp->right)
            s.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};