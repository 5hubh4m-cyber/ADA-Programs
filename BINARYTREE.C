#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *left,*right;
};
typedef struct node NODE;
NODE *root=NULL;
void create_tree(NODE *);
void display(NODE *,int);
void preorder(NODE *);
void postorder(NODE *);
void inorder(NODE *);
void main()
{
int ch;
clrscr();
root=NULL;
while(1)
{
printf("\n\n binary tree");
printf("\n--------------");
printf("\n1. create");
printf("\n2. display");
printf("\n3. preorder");
printf("\n4. inorder");
printf("\n5. postorder");
printf("\n6. exit");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: root=(NODE *)malloc(sizeof(NODE));
 create_tree(root);
 break;
case 2: printf("the binary tree nodes are :\n\n\n");
 display(root,1);
 break;
case 3: printf("pre order traversal is:\n\n");
 preorder(root);
 break;
case 4: printf("in order traversal is:\n\n");
 inorder(root);
 break;
case 5: printf("post order traversal is:\n\n");
 postorder(root);
 break;
case 6: exit(0);
}
getch();
clrscr();
 }
}
void create_tree(NODE *ptr)
{
NODE *newleft,*newright;
int item;
char ch;
if(ptr!=NULL)
{
 printf("\n enter an element:\n");
 scanf("%d",&item);
 ptr->info=item;
 printf("\n do you want to create a left child of %d [y/n]\n",ptr->info);
 ch=getche();
 if(ch=='y'||ch=='Y')
 {
 newleft=(NODE *)malloc(sizeof(NODE));
 ptr->left=newleft;
 create_tree(newleft);
 }
 else
 {
 ptr->left=NULL;
 create_tree(NULL);
 }
 printf("\n do you want to create a right child of %d [y/n]\n",ptr->info);
 ch=getche();
 if(ch=='y'||ch=='Y')
 {
 newright=(NODE *)malloc(sizeof(NODE));
 ptr->right=newright;
 create_tree(newright);
 }
else
 {
 ptr->right=NULL;
 create_tree(NULL);
 }
 }
}
void display(NODE *ptr,int level)
{
int i;
if(ptr!=NULL)
{
 display(ptr->right,level+1);
 for(i=0;i<level;i++)
 printf(" ");
 printf("%2d\n",ptr->info);
 display(ptr->left,level+1);
}
}
void preorder(NODE *ptr)
{
if(ptr)
{
 printf("%d\t",ptr->info);
 preorder(ptr->left);
 preorder(ptr->right);
}
}
void postorder(NODE *ptr)
{
if(ptr)
{
postorder(ptr->left);
postorder(ptr->right);
printf("%d\t",ptr->info);
}
}
void inorder(NODE *ptr)
{
if(ptr)
{
inorder(ptr->left);
printf("%d\t",ptr->info);
inorder(ptr->right);
}
}