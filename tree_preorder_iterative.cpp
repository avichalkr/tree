#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
struct node
{
	int data;
	struct node *lt,*rt;
};
struct node *nn(int data)
{
	struct node *newnode=new struct node();
	newnode->data=data;
	newnode->lt=NULL;
	newnode->rt=NULL;
}
void pre(node *root)
{
	if(root==NULL)
	return ;
	stack <node *> s1,s2;
	s1.push(root);
	struct node *node;
	while(s1.empty()==false)
	{
		node=s1.top();
		s2.push(node);
		s1.pop();
		if(node->lt)
		s1.push(node->lt);
		if(node->rt)
		s1.push(node->rt);
		
	}
	while(s2.empty()==false)
	{
		node=s2.top();
		s2.pop();
		cout<<node->data<<" ";
	}
}
int main()
{
	struct node *node=nn(10);
	node->lt=nn(2);
	node->rt=nn(3);
	node->lt->lt=nn(4);
	node->lt->rt=nn(5);
	node->rt->lt=nn(6);
	node->rt->rt=nn(7);
	pre(node);
}
