#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data ;
        node*left ;
        node*right ;
        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};
node*buildtree(){
    int data;
    cout<<"entre the data:"<<endl;
    cin>>data;
    node*root=new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"entre data for inserting left"<<data<<endl;
    root->left=buildtree();
    cout<<"entre data for inserting right"<<data<<endl;
    root->right=buildtree();
    return root;
}
levelordertraversal(node*root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*temp=q.front();
        cout<<temp->data<<endl;
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

            


int main(){
    
    // creation 
   node* root = buildtree();
    return 0;
}