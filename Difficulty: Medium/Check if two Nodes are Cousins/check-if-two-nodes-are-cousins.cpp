/*Complete the function below
Node is as follows:
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
class Solution {
  public:
    // Function to check if two nodes are cousins in a tree
    bool parent(Node* root,int x,int y){
        if(root==NULL) return 0;
        if(root->left && root -> right){
        if(root->left->data==x && root->right->data==y)
        return 1;
         if(root->left->data==y && root->right->data==x)
        return 1;
        }
        return parent(root->left,x,y) ||parent(root->right,x,y);
    }
    bool isCousins(Node* root, int x, int y) {
        // write code here
        queue<Node*>q;
        if(!root)
        return 0;
        if(x==y)
        return 0;
        q.push(root);
        int l1=-1,l2=-1;
        int level=0;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                Node *temp=q.front();
                q.pop();
                if(temp->data==x)
                l1=level;
                 if(temp->data==y)
                l2=level;
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                
            }
            level++;;
        
           if(l1!=-1 && l2!=-1)
           break;
        }
        return l1!=-1 &&
       l2!=-1 &&
       l1==l2 &&
       !parent(root,x,y);
    }
};