#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct node{
    int data;
    struct node *left,*right;
};

node* newnode(int x){
    node *temp=new node;
    temp->data=x;
    temp->right=temp->left=NULL;
    return temp;
}

void levelorder(node *root){
    if(root==NULL) return ;
    queue< node* >q;
    q.push(root);
    
    while(!q.empty()){
        node *temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

//push left child first
      //enqueue left child first

        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL);
            q.push(temp->right);
    }
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);

    levelorder(root);
    return 0;
}
