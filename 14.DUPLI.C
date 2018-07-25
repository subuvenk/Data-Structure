#include<stdio.h>
#include<malloc.h>
struct node
{
 int d;
 struct node *l1,*l2;
}*t,*ty,*head,*ty2;
void main()
{
 clrscr();
 printf("\nEnter the elements (press -999 to quit inserting) :\n");
 head=(struct node*)malloc(sizeof(struct node));
 head->l1=NULL;
 head->l2=NULL;
 scanf("%d",&(head->d));
 t=head;
 while(t->d!=-999)
 {
  ty=(struct node*)malloc(sizeof(struct node));
  ty->l2=NULL;
  ty->l1=t;
  t->l2=ty;
  scanf("%d",&(ty->d));
  if(ty->d==-999)
  {
   t->l2=NULL;
   free(ty);
  }
  t=ty;
 }
 t=head;
 printf("The list is :\n");
 while(t!=NULL)
 {
  printf("%d\t",t->d);
  t=t->l2;
 }
 printf("\nAfter deleting the duplicates:\n");
 t=head;
 while(t->l2!=NULL)
 {
  ty=t->l2;
  while(ty!=NULL)
  {
   if(t->d==ty->d)
   {
    ty2=ty->l2;
    ty->l1->l2=ty->l2;
    ty->l2->l1=ty->l1;
    free(ty);
    ty=ty2;
   }
   else
   {
    ty=ty->l2;
   }
  }
  t=t->l2;
 }

 t=head;
 while(t!=NULL)
 {
  printf("%d\t",t->d);
  t=t->l2;
 }
 getch();
}