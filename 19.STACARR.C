#include<stdio.h>
#include<conio.h>
#define MAX 5
pop();push();
display();
int top=-1;
int item_ar[5],item;
void main()
{
int choice;
clrscr();
while(1)
{
printf("\n\tMenu:\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n\t");
printf("Enter ur choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:exit();break;
default:printf("\nWrong choice...");
break;
}
}
}
push()
{
if(top==MAX-1)
printf("\nThe stack overflow condition.");
else
{
printf("\nEnter the data to be pushed: ");
scanf("%d",&item);
top=top+1;
item_ar[top]=item;
}
return;
}
pop()
{
if(top==-1)
printf("\nThe stack underflow condition.");
else
{
printf("\n\tThe popped element is %d.",item_ar[top]);
top=top-1;
}
return;
}
display()
{
int i;
printf("\nThe element are: \n");
if(top>-1)
for(i=top;i>-1;i--)
printf("%d\t",item_ar[i]);
else
printf("\tStack underflow.");
return;
}