#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data ;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* Buildtree(node* root){
    cout<<"Enter the data:"<<endl;
    int data;
    // cout<<data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new node(data);
    cout<<"Enter data in left:"<<root->data<<endl;
    root->left=Buildtree(root->left);
    cout<<"Enter data in right:"<<root->data<<endl;
    root->right=Buildtree(root->right);
    return root;
}
void levelordertraversal(node*root){
    if (root=NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();
         cout<<endl;
        if(temp==NULL){
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            q.push(temp->left);
            q.push(temp->right);

        }
       

    }
    

}

        




int main(){
    node*root=NULL;
    // creating a tree 
    root=Buildtree(root);
    // 1,3,7,-1,-1,11,-1,-1,15,17,-1,-1,-1
    cout<<"printng the level prefer travese output "<<endl;
    levelordertraversal(root);


    return 0;
}