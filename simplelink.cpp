#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*prev;
    Node*next;
    Node(int data){
        val=data;
        prev=NULL;
        next=NULL;
    }
};
class doublylinkedlist{
    public:
    Node*head;
    Node*tail;
    doublylinkedlist(){
        head=NULL;
        tail=NULL;
    }

    void insertatstart(int val){
        Node*new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
    void display(){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        
    }
    void inserattail(int val){
        Node*new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }

};

int main(){
    Node*new_node=new Node(3);
    doublylinkedlist dll;
   dll.inserattail(1);
    dll.inserattail(2);
    dll.inserattail(3);
    dll.inserattail(4);
    dll.display();
    return 0;
}