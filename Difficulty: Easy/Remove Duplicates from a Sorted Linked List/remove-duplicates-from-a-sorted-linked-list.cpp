/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
};*/

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node* curr=head->next;
        Node* prev=head;
        while(curr){
            if(curr->data==prev->data){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else{
                prev=prev->next;
                curr=curr->next;
            }
        }
         return head;
    }
};