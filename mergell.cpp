#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
    class linkedlist{
        public:
        Node*head;
        linkedlist(){
            head=NULL;
        }
        void insertattail(int val){
        Node*new_node=new Node(val);
            if(head==NULL){
                head=new_node;
                return;
            }
            Node*temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
                temp->next=new_node;
        }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    };
    Node*mergelinkedlist(Node*&head1,Node*&head2){
        Node*dummy_head_node=new Node(-1);
        Node*ptr1=head1;
        Node*ptr2=head2;
        Node*ptr3=dummy_head_node;
        while(ptr1&&ptr2){
            if(ptr1->val<ptr2->val){
                ptr3->next=ptr1;
                ptr1=ptr1->next;
            }
            else{
                ptr3->next=ptr2;
                ptr2=ptr2->next;
            }
       
            ptr3=ptr3->next;
      
        }
        if(ptr1){
            ptr3->next=ptr1;
        }
        else{
            ptr3->next=ptr2;
        }
        return (dummy_head_node->next);
    }

int main(){
    linkedlist ll1;
    ll1.insertattail(1);
    ll1.insertattail(4);
    ll1.insertattail(5);
    ll1.display();
    linkedlist ll2;
    ll2.insertattail(2);
    ll2.insertattail(3);
    ll2.display();
    linkedlist ll3;
    ll3.head=mergelinkedlist(ll1.head,ll2.head);
    ll3.display();
    return 0;
}