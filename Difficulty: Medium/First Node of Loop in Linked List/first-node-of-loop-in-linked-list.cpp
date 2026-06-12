/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        Node *fast=head,*slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                Node* temp=head;
                while(slow!=temp){
                    slow=slow->next;
                    temp=temp->next;
                }
                return temp->data;
            }
        }
        return -1;
        
    }
};