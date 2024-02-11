#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
void insertatHead(Node* &head,int val){
    Node*new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertatLast(Node* &head , int val){
    Node*temp = head;
    Node*new_node = new Node(val);
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}
void insertatposi(Node* &head , int val , int pos){
        if(pos == 0){
            insertatHead(head , val);
            return ;
        }
        Node*temp = head;
        Node*new_node = new Node(val);
        int curr_pos =0;
        while(curr_pos!=pos-1){
            temp = temp->next;
            curr_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    } 
void updateatkpos(Node* &head, int val , int k){
    Node*temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;

}
void deleteatfirst(Node* &head){
    Node*temp = head;
    head = head->next;
    free(temp);
}
void deleteatlast(Node*&head){
   Node*second_last = head;
   while(second_last ->next->next!=NULL){
   second_last = second_last->next;
   }
   
//    now second_last point to be second_last Node 
    Node*temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
void deleteatkposi(Node*head, int pos){
    if(pos == 0){
        deleteatfirst(head);
    }
    Node*prev = head;
    int curr_pos = 0;
    while(curr_pos!=pos){
        prev = prev->next;
        curr_pos++;
    }
    Node*temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

}
void deletelatenateele(Node*head){
    Node*current = head;
    Node*temp = current->next;
    while(current != NULL){
        current= current->next;
        current->next = current->next->next;
        free(temp);
    }
}
void display(Node* head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp ->next;
    }
    cout<<"NULL"<<endl;
}
    
int main(){
    Node*head = NULL;
    insertatHead(head, 2);
    display(head);
    insertatHead(head, 3);
    display(head);
    insertatHead(head, 4);
    display(head);
    insertatHead(head, 5);
    display(head);
    insertatLast(head , 10);
    display(head);
    insertatposi(head,13,2);
    display(head);
    updateatkpos(head , 22,3);
    display(head);
    // deleteatfirst(head);
    // display(head);
    // deleteatlast(head);
    // display(head);
    // deleteatkposi(head , 2);
    // display(head);
    deletelatenateele(head);
    display(head);

    return 0;
}