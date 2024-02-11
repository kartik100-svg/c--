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
    bool chekequallinkedlists(Node* &head1,Node* &head2){
        Node*ptr1=head1;
        Node*ptr2=head2;
        while(ptr1!=NULL&&ptr2!=NULL){
            if(ptr1->val==ptr2->val){
                return false;
            }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        }
        // at this point either ptr1is null or ptr2is null or both are null 
        return (ptr1==NULL&&ptr2==NULL);
        
    }
        
  
        
int main(){
    linkedlist ll1;
    ll1.insertattail(1);  
    ll1.insertattail(2);  
    ll1.insertattail(3); 
    ll1.display();  
    linkedlist ll2; 
    ll2.insertattail(1);  
    ll2.insertattail(2);
    ll2.insertattail(3);
    ll2.display();  
    cout<<chekequallinkedlists(ll1.head,ll2.head)<<endl;
    return 0;
}