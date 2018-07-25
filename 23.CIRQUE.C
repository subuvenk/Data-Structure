#include<stdio.h>
#include<conio.h>
#define MAX 5
int underflow();
int overflow();
void cqins();
void cqdel();
void disp();
int q[MAX];
int front=-1;
int rear=-1;
void main()
{
int ch,data;
clrscr();
while(1)
{
printf("\t\t***CIRCULAR QUEUE***\t\t");
printf("\nMENU:\n1.Insert\n2.Delete\n3.Display\n4.Exit:\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(overflow()==0)
cqins();
break;
case 2:
if(underflow()==1)
cqdel();
break;
case 3:
if(underflow()==1)
disp();
break;
case 4:
printf("Thank you!");
getch();
exit(0);
default:
printf("\nEnter a choice present in the menu.");
}
getch();
}
}
int underflow()
{
if((front==-1)&&(rear==-1))
{
printf("Queue is empty.\n");
return(0);
}
else
{
return(1);
}
}
int overflow()
{
if(front==((rear%MAX)+1))
{
printf("Queue is full.\n");
return(1);
}
else
{
return(0);
}
}
void cqins()
{
int data;
printf("\nEnter the data: ");
scanf("%d",&data);
if((front==-1)&&(rear==-1))
{
front=rear=0;
q[rear]=data;
}
else if(((rear%MAX)+1)!=front)
{
rear=(rear%MAX)+1;
q[rear]=data;
}
}
void cqdel()
{
printf("The deleted elemented is: %d",q[front]);
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front==MAX-1)
{
front=0;
}
else
{
front=front+1;
}
}
void disp()
{
int i;
if(front<=rear)
{
for(i=front;i<=rear;i++)
{
printf("\t%d",q[i]);
}
}
}



