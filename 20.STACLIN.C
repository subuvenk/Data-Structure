#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
}*top=NULL,*temp;
void pop();
void push();
void display();
int item;
void main()
{
int choice;
clrscr();
while(1)
{
printf("\n\tMenu\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit");
printf("\nEnter ur choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:exit();break;
default:printf("\nWrong choice.");break;
}
}
}
void push()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data to be inserted: ");
scanf("%d",&item);
temp->data=item;
temp->link=top;
top=temp;
}
void pop()
{
if(top==NULL)
{
printf("\nStack underflow condition.");
}
else
{
printf("\nThe popped elements is %d.",top->data);
temp=top;
top=top->link;
free(temp);
}
}
void display()
{
temp=top;
if(temp!=NULL)
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->link;
}
else
printf("\nStack underflow condition.");
getch();
}