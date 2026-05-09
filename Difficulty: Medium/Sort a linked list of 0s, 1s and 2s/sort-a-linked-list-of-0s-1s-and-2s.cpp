/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* curr=head;
        int c0=0,c1=0,c2=0;
        while(curr){
            if(curr->data==0) c0++;
            else if(curr->data==1) c1++;
            else if(curr->data==2) c2++;
            curr=curr->next;
        }
        curr=head;
        while(c0--){
            curr->data=0;
            curr=curr->next;
        }
        while(c1--){
            curr->data=1;
            curr=curr->next;
        }
        while(c2--){
            curr->data=2;
            curr=curr->next;
        }
        return head;
    }
};