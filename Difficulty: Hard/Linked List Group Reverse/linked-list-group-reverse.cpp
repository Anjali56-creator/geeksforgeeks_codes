/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        Node* first=new Node(0);
        first->next=head;
        head=first;
        int x;
        Node* second,*prev,*curr,*front;
        while(first->next){
             x=k;
            second=first->next;
            prev=first;
            curr=first->next;
            while(x&&curr){
                front=curr->next;
                curr->next=prev;
                prev=curr;
                curr=front;
                x--;
            }
            first->next=prev;
            second->next=curr;
            first=second;
        }
        first=head;
        head=head->next;
        delete first;
        return head;
    }
};