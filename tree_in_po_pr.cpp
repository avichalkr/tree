#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *nn(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}
void preorder(struct node *root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
		cout<<root->data<<" ";

}
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";

	inorder(root->right);
		
}
int main()
{
	struct node *root=nn(10);
	root->left=nn(20);
	root->right=nn(30);
	root->left->left=nn(40);
	root->left->right=nn(50);
	root->right->right=nn(60);
	root->right->left=nn(70);
	cout<<"Pre order:";
	preorder(root);
	cout<<"Post order:";
	postorder(root);
	cout<<"In order:";
	inorder(root);
	return 1;
	
	
	
}



