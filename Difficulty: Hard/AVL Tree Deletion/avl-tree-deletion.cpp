/* Node is as follows:

struct Node
{
    int data, height;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        height = 1;
        left = right = NULL;
    }
};

*/
int getheight(Node *root){
        if(!root)
            return 0;
        return root->height;
    }

    int getbalance(Node *root){
        if(!root)
            return 0;
        return getheight(root->left) - getheight(root->right);
    }

    Node* rightrotation(Node *root){
        Node *temp = root->left;
        Node *temp2 = temp->right;

        temp->right = root;
        root->left = temp2;

        root->height = 1 + max(getheight(root->left),
                               getheight(root->right));

        temp->height = 1 + max(getheight(temp->left),
                               getheight(temp->right));

        return temp;
    }
    Node* leftrotation(Node *root){
        Node *temp = root->right;
        Node *temp2 = temp->left;

        temp->left = root;
        root->right = temp2;

        root->height = 1 + max(getheight(root->left),
                               getheight(root->right));

        temp->height = 1 + max(getheight(temp->left),
                               getheight(temp->right));

        return temp;
    }


Node* deleteNode(Node* root, int data) {
    // add code here,
    if(!root)
    return NULL;
    
    if(data<root->data) //left
    root->left=deleteNode(root->left,data);
    else if(data>root->data) //right side
    root->right=deleteNode(root->right,data);
    else{
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        else if(root->left && !root->right) //left child
        {
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else if(!root->left && !root->right){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //both child exists
        else{
            //right side smallest element
            Node *curr=root->right;
            while(curr->left){
                curr=curr->left;
            }
            
            root->data=curr->data;
            root->right=deleteNode(root->right,root->data);
        }
    }
    //update height
    root->height=1+max(getheight(root->left),getheight(root->right));
    //check balancing
    int balance=getbalance(root);
    //left side
    if(balance>1){
       //ll
       if(getbalance(root->left)>=0)
       return rightrotation(root);
       //lr
       else{
           root->left=leftrotation(root->left);
           return rightrotation(root);
       }
    }
    else if(balance<-1){
        //rr
        if(getbalance(root->right)<=0)
        return leftrotation(root);
        else{
            root->right=rightrotation(root->right);
            return leftrotation(root);
        }
        
    }
    else return root;
}