#include<bits/stdc++.h>
using namespace std;
 
 typedef struct Node
 {
     int data;
     struct Node* left;
     struct Node* right;
      
      Node(int val)  //constructor
      {
          data=val;
          left=NULL;
          right=NULL;
      }
 } ListNode;

void preorder(ListNode* root)
{
    if(root==NULL)
     return ;
   cout<<root->data<<" "<<endl;
   preorder(root->left);
   preorder(root->right); 
}
void inorder( ListNode* root)
{
    if(root==NULL)
    {
        return ;
    }
  inorder(root->left);
  cout<<root->data<<" "<<endl;
  inorder(root->right);
}
void postorder(ListNode* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "<<endl;
}
int main()
{
  ListNode* root= new ListNode(1);
  root->left= new ListNode(2);
  root->right=new ListNode(3);
  root->left->left= new ListNode(4);
  root->left->right= new ListNode(5);
  root->right->left= new ListNode(6);
  root->right->right= new ListNode(7);
  preorder(root);
  inorder(root);
  postorder(root);
  return 0;
}
