class Solution {
public:

    Node* reverse(Node* curr, Node* prev){
        if(curr==NULL)
            return prev;

        Node* front=curr->next;
        curr->next=prev;

        return reverse(front,curr);
    }

    Node* addTwoLists(Node* head1, Node* head2) {

        Node *first=reverse(head1,NULL);
        Node *second=reverse(head2,NULL);

        Node* curr1=first;
        Node* curr2=second;

        Node* head=new Node(0);
        Node* tail=head;

        int carry=0,sum;

        while(curr1 && curr2){

            sum=curr1->data+curr2->data+carry;

            tail->next=new Node(sum%10);

            curr1=curr1->next;
            curr2=curr2->next;
            tail=tail->next;

            carry=sum/10;
        }

        while(curr1){

            sum=curr1->data+carry;

            tail->next=new Node(sum%10);

            curr1=curr1->next;
            tail=tail->next;

            carry=sum/10;
        }

        while(curr2){

            sum=curr2->data+carry;

            tail->next=new Node(sum%10);

            curr2=curr2->next;
            tail=tail->next;

            carry=sum/10;
        }

        while(carry){

            tail->next=new Node(carry%10);

            tail=tail->next;

            carry/=10;
        }

        head=reverse(head->next,NULL);

        while(head->next && head->data==0)
            head=head->next;

        return head;
    }
};