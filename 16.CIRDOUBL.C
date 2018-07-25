#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int d;
struct node*l1,*l2;
}*head,*t,*ty,*ty2;
void main()
{
int p,i,n,s,c;
clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->l1=head;
head->l2=head;
printf("\nEnter the value (press -999 to quit inserting):\n");
scanf("%d",&(head->d));
t=head;
while(t->d!=-999)
{
ty=(struct node*)malloc(sizeof(struct node));
ty->l2=head;
ty->l1=t;
t->l2=ty;
t->l1=ty;
scanf("%d",&(ty->d));
if(ty->d==-999)
{
t->l2=head;
head->l1=t;
free(ty);
break;
}
t=ty;
}
printf(" 1.Inserting first and last\n 2.Inserting at user specified position\n 3.Deleting first and last\n 4.Deleting user specified position\n 5.Deleting user specified number\n");
b:printf("Enter the choice: ");
scanf("%d",&s);
switch(s)
{
case 1:
printf("Inserting first and last\n");
ty=(struct node*)malloc(sizeof(struct node));
ty->l2=head;
printf("Enter the first num to be inserted: ");
scanf("%d",&(ty->d));
t=head;
while(t->l2!=head)
{
t=t->l2;
}
t->l2=ty;
ty->l1=t;
ty->l2=head;
head=ty;
ty=(struct node*)malloc(sizeof(struct node));
t=head;
printf( "Enter the num to be inserted at last: ");
ty->l2=head;
head->l1=ty;
scanf("%d",&(ty->d));
do
{
t=t->l2;
}while(t->l2!=head);
t->l2=ty;
ty->l1=t;
printf("\nAfter inserting at first and last\n ");
t=head;
do
{
printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
break;
case 2:
printf("Enter the position: ");
scanf("%d",&p);
t=head;
ty=(struct node*)malloc(sizeof(struct node));
printf("Enter the number: ");
scanf("%d",&(ty->d));
if(p==1)
{
ty->l2=head;
head->l1=ty;
while(t->l2!=head)
t=t->l2;
t->l2=ty;
ty->l1=t;
head=ty;
}
else
{
while(p>2)
{p--;
t=t->l2;
}
ty2=(struct node*)malloc(sizeof(struct node));
ty2=t->l2;
t->l2=ty;
ty->l1=t;
ty->l2=ty2;
ty->l1=ty2;
}
printf("After inserting at user specified position\n");
t=head;
do
{
printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
break;
case 3:
printf("Deleting first and last \n");
t=head;
while(t->l2!=head)
t=t->l2;
t->l2=head->l2;
head=head->l2;
//printf("After deleting at first \n");
t=head;
do
{
//printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
t=head;
while(t->l2->l2!=head)
t=t->l2;
free(t->l2);
t->l2=head;
t=head;
printf("After deleting at first and last \n");
do
{
printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
break;
case 4:
printf("Deleting user specified position \n");
t=head;
printf("Enter the position: ");
scanf("%d",&i);
if(i==1)
{
t=head;
while(t->l2!=head)
t=t->l2;
t->l2=head->l2;
head=head->l2;
}
else
{
while(i>2)
{
i--;
t=t->l2;
}
ty=t->l2;
if(ty->l2==head)
{
t->l2=head;
free(ty);
}
else
{t->l2=ty->l2;
free(ty);
}
}
printf("After deleting user specified position \n");
t=head;
do
{
printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
break;
case 5:
printf("Deleting user specified number \n");
printf("Enter the number: ");
scanf("%d",&n);
t=head;
if(n==t->d)
{
while(t->l2!=head)
t=t->l2;
t->l2=head->l2;
head=head->l2;
}
else
{
while(n!=t->l2->d)
t=t->l2;
ty=t->l2;
if(ty->l2==head)
{
t->l2=head;
free(ty);
}
else
{t->l2=ty->l2;
free(ty);
}
}
printf("After deleting the given number \n");
t=head;
do
{
printf("%d\t",t->d);
t=t->l2;
}while(t!=head);
break;
}
printf("\nDo u want to continue or not.\n");
scanf("%d",&c);
if(c==1)
goto b;
else
printf("Thank you!!!\n");
getch();
}


