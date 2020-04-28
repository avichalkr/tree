#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;
struct node
{
	int data;
	struct node *left, *right;
};
struct node *newnode(int data)
{
	struct node *nn=new node();
	nn->data=data;
	nn->left=NULL;
	nn->right=NULL;
}
 void preorder(node *root)
 {
 	if(root==NULL)
 	return;
 	stack <node *> s;
 	s.push(root);
 	while(s.empty()==false)
 	{
	 struct node *ptr=s.top();
	 cout<<ptr->data<<" ";	
	 s.pop();
	 if(ptr->left)
	 s.push(ptr->left);
	 if(ptr->right)
	 s.push(ptr->right);
	  }
 	
 }
 int main()
 {
 	struct node *root=newnode(10);
 	root->left=newnode(2);
 	root->left=newnode(1);
 	root->left->right=newnode(1);
 	root->right=newnode(11);
 	root->right->left=newnode(14);
 	root->right->right=newnode(12);
 	cout<<"pre order:";
	 preorder(root);
 	return 1;
 }

