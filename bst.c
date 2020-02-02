#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node* insert(struct node *root,int value)
{
	if(root==NULL)
	{
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=value;
		temp->lchild=NULL;
		temp->rchild=NULL;
		root=temp;
	}
	else if(root->data > value)
		root->lchild = insert(root->lchild,value);
	else if(root->data < value)
		root->rchild = insert(root->rchild,value);
	else
		printf("Duplicate value");
	return root;			
}
void inorder(struct node *root)
	{
		if(root!=NULL)
		{
			inorder(root->lchild);
			printf("%d  ",root->data);
			inorder(root->rchild);
		}	
	}
void preorder(struct node *root)
	{
		if(root!=NULL)
		{
			printf("%d  ",root->data);
			preorder(root->lchild);
			preorder(root->rchild);
		}	
	}	
void postorder(struct node *root)
	{
		if(root!=NULL)
		{
			postorder(root->lchild);
			postorder(root->rchild);
			printf("%d  ",root->data);
		}	
	}	
struct node* search(struct node* root, int key)
{
	if(root==NULL||root->data==key)
		return root;
	if(key>root->data)
		return search(root->rchild,key);
	return search(root->lchild,key);
}
	
int main(void)
{
	struct node *root=NULL;
	int value,ch,key;
	do
	{
		printf("\n1.Insertion\n");
		printf("\n2.Inorder\n");
		printf("\n3.Preorder\n");
		printf("\n4.Postorder\n");
		printf("\n5.Search\n");
		printf("\n6.Exit\n");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value:\n");
				scanf("%d",&value);
				root=insert(root,value);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				preorder(root);
				break;
			case 4:
				postorder(root);
				break;
			
			case 5:
				printf("Enter the value:\n");
				scanf("%d",&key);
				root=search(root,key);
				printf("element found at %d\n",root);
				break;
			case 6:
				exit(0);
			
			default:
				printf("invalid choice");					
		}
	}while(1);
return 0;
}			
