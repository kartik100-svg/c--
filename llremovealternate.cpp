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
void deletelternate(Node*&head){
    Node*curr_node=head;
    while(curr_node!=NULL&&curr_node->next!=NULL){
        Node*temp=curr_node->next;
        curr_node->next=curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;

    }
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
        
int main(){
    linkedlist ll;
    ll.insertattail(1);  
    ll.insertattail(2);  
    ll.insertattail(3);  
    ll.insertattail(4);  
    ll.insertattail(5);  
    ll.insertattail(6);
    ll.display();  
    ll.deletelternate(ll.head);
    ll.display();
    return 0;
}