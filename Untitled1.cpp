#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newNode(int data)
{
	struct *node=(struct node*)malloc
	(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
bool check_element(struct node*root,int key)
if(root==NULL)
{
	return false;
}
{
	return true;
}
{
	return check_element(root->right,kry);
}
}
int main()
{
	struct node*root=newNode(80);
	root->left=newNode(60);
	root->right=newNode(90);
	root->left=newNode(40);
	root->left->right=newNode(70)
	root->left->left->left=newNode(30);
	root->left->left->right=newNode(50);
	if(check_element(root,50)){
		print("found\n");
	}
	else
	{
		printf("Notfound");
	}
	return 0;
  }  
