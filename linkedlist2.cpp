#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};
    void insertathead(Node* &head,int val)
    {
        Node *new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }
   
    void insertattail(Node* &head ,int val){
        Node*new_node=new Node(val);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void insertatposition(Node* &head,int val,int pos){

        Node*new_node=new Node(val);
        if(pos==0){
            insertathead(head,val);
            return ;
        }
        Node*temp=head;
        int current_position=0;
        while(current_position!=pos-1){
            temp=temp->next;
            current_position++;
        }
        //temp is pointing to pos-1;
        new_node->next=temp->next;
        temp->next=new_node;
    }
   
    void updationatposition(Node*&head,int k,int val){
    Node*temp=head;
    int curr_pos=0;
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }    
    // temp pointing to the kth node
    temp->val=val;
}
    void deleteathead(Node* &head){
        Node*temp=head;
        head=head->next;
        free(temp);
    }
    void deleteattail(Node*&head){
        Node*second_last=head;
        while (second_last->next->next!=NULL){
            second_last=second_last->next;
        }
        // now second last points to a second last node 
        Node*temp=second_last->next;
        // node to be deleted 
        second_last->next=NULL;
        free(temp);
    }

 void display(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

int main()
{
    Node *head = NULL; 
     insertathead(head,2);
     display(head);
     insertathead(head,1);
     display(head);

     insertattail(head,3);
     display(head);

     insertatposition(head,4,2);
     display(head);

     updationatposition(head,2,5);
     display(head); 

     deleteathead(head);
     display(head);

     deleteattail(head);
     display(head);
    return 0;
}