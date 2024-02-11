// slow and ffast pointer 
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
        Node*temp=head;
        if(head==NULL){
            head=new_node;
            return;
        }
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display(){
        Node*temp=head;
        while (temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
Node*findmiddlenode(Node*&head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


        
        
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
   ll.insertattail(3);
   ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.display();
    Node*middle_node=findmiddlenode(ll.head);
    cout<<middle_node->val<<endl;
    return 0;
}