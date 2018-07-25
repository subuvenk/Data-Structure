#include<stdio.h>
#include<malloc.h>
struct node
{
 int d;
 struct node *li;
}*ty,*head,*t;
void main()
{
 int no;
 clrscr();
 head=(struct node*)malloc(sizeof(struct node));
 t=head;
 head->li=NULL;
 printf("\nEnter the elements (press -999 to quit inserting) :\n");
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
 ty=t->li;
 while(ty!=NULL)
 {
  t->li=ty->li;
  ty->li=head;
  head=ty;
  ty=t->li;
 }
 printf("The reversed list is :\n");
 t=head;
 while(t!=NULL)
 {
  printf("%d\n",t->d);
  t=t->li;
 }
 getch();
}