// User function Template for C++

class Solution {
  public:
    vector<int> largestValues(Node* root) {
        // code here
        vector<int> ans;
        queue<Node*>q;
        q.push(root);
        Node* temp;
        if(root == NULL)
        return ans;
        while(!q.empty()){
            int n=q.size();
            int mx=INT_MIN;
            while(n){
                temp=q.front();
                q.pop();
                mx=max(mx,temp->data);
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                n--;
            }
            ans.push_back(mx);
        }
        return ans;
        
    }
};