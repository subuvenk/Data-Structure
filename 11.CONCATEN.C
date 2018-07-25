#include<stdio.h>
#include<malloc.h>
struct node 
{
 int d;
 struct node*li;
}*t,*ty,*head,*head1;
void main()
{
 int l, l1;
 clrscr();
 head=(struct node*)malloc(sizeof(struct node));
 t=head;
 head->li=NULL;
 printf("Enter the first set of elements (press -999 to quit inserting):\n");
 scanf("%d",&(head->d));
 while(t->d!=-999)
 {
  ty=(struct node*)malloc(sizeof(struct node));
  ty->li=NULL;
  t->li=ty;
  scanf("%d",&(ty->d));
  if(ty->d==-999)
  {
   t->li=NULL;
   free(ty);
  }
  t=ty;
 }
 t=head;
 printf("The list is :\n");
 while(t!=NULL)
 {
  printf("%d\t",t->d);
  t=t->li;
 }
 head1=(struct node*)malloc(sizeof(struct node));
 head1->li=NULL;
 t=head1;
 printf("\nEnter the second set of elements (press -999 to quit inserting) :\n");
 scanf("%d",&(head1->d));
 while(t->d!=-999)
 {
  ty=(struct node*)malloc(sizeof(struct node));
  ty->li=NULL;
  t->li=ty;
  scanf("%d",&(ty->d));
  if(ty->d==-999)
  {
   t->li=NULL;
   free(ty);
  }
  t=ty;
 }
 t=head1;
 printf("The list is: \n");
 while(t!=NULL)
 {
  printf("%d\t",t->d);
  t=t->li;
 }
 t=head;
 while(t->li!=NULL)
 {
  t=t->li;
 }
 t->li=head1;
 t=head;
 printf("\nThe concatenated list is :\n");
 while(t!=NULL)
 {
  printf("%d\t",t->d);
  t=t->li;
 }
 getch();
}



