#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int main(){
struct node *root=malloc(sizeof(struct node));
struct node *lchil=malloc(sizeof(struct node));
struct node *rchil=malloc(sizeof(struct node));
root->data=1;
lchil->data=2;
rchil->data=3;
root->left=lchil;
root->right=rchil;
lchil->left=lchil->right=NULL;
rchil->left=rchil->right=NULL;
printf("root data : %d\n",root->data);
printf("left node : %d\n",root->left->data);
printf("right node %d\n",root->right->data);
}
