#include <stdio.h>
#include <stdlib.h>
struct node
{
    int d;
    struct node *l,*r;
}*temp, *root;
int x;
struct node * create()
{int x;
    scanf("%d", &x);
    if(x== -999)
      return (NULL);
    else
    {
        struct node *nd=(struct node *)malloc(sizeof(struct node));
        nd->d=x;
        nd->l=create();
        nd->r=create();
        return nd;
    }

}
void inorder(struct node *root)
{
    if(root != NULL)
    {
        inorder(root->l);
        printf("%d\t", root->d);
        inorder(root->r);
    }
}
void search(int e, struct node *ir)
{
 if(ir->d== e)
 {x=1;
     if(temp->l != NULL && temp->l->d==e)
     {
         if(temp->r== NULL)
         printf("\n no sibbling\n");
         else
         printf("\n sibbling %d\n", temp->r->d);
     }
     else if(temp->r!= NULL &&temp->r->d == e)
       {
           if(temp->l== NULL)
           printf("\n no sibbling");
           else
           printf("\nsibbbling:%d", temp->l->d);
       }
 }
 else
 {
     if(ir->l != NULL){
         temp=ir;
     search(e, ir->l);}
     if(ir->r != NULL){
         temp=ir;
     search(e, ir->r);
     }
 }
}
int main()
{ int e;
x=0;
    printf("\n enter\n");
root=NULL;
temp=root;
    root= create();
    inorder(root);
    printf("\n enter the element whose sibbiling is to be searched\n");
    scanf("%d", &e);
    if(e==root->d)
    {
        printf("root never has a sibbling\n");
     return 0;
    }
    search(e,root);
    if(x==0)
    printf("not found");
return 0;
}
