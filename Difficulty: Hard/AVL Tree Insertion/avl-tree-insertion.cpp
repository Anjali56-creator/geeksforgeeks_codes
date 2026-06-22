/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

class Solution {
  public:
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

    /*You are required to complete this method */
    Node* insertToAVL(Node* root, int key) {
        // Your code here
        if(!root){
            Node* temp = new Node(key);
             return temp;
            temp->data = key;
            temp->left = NULL;
            temp->right = NULL;
            temp->height = 1;
            return temp;
        }

        if(key < root->data){
            root->left = insertToAVL(root->left, key);
        }
        else if(key > root->data){
            root->right = insertToAVL(root->right, key);
        }
        else{
            return root;
        }

        root->height = 1 + max(getheight(root->left),
                               getheight(root->right));

        int balance = getbalance(root);

        // LL
        if(balance > 1 && key < root->left->data){
            return rightrotation(root);
        }

        // RR
        if(balance < -1 && key > root->right->data){
            return leftrotation(root);
        }

        // LR
        if(balance > 1 && key > root->left->data){
            root->left = leftrotation(root->left);
            return rightrotation(root);
        }

        // RL
        if(balance < -1 && key < root->right->data){
            root->right = rightrotation(root->right);
            return leftrotation(root);
        }

        return root;
    }
};