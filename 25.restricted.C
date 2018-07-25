#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int d;
struct node *l;
}
*front,*rear,*t,*ty,*ty2;
int main()
{
int c,ch;
clrscr();
front=NULL;
rear=NULL;
t=front;
ty=t;
printf("\n1.Input restricted deque\n2.Output restricted deque\n3.Exit\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
abc:
printf("\n\n\t***DEQUE***\n1.Insert\n2.Delete\n3.Display\n4.Exit");
printf("\nEnter the choice: ");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\n1.Front\t2. Rear\nEnter your choice: ");
scanf("%d",&c);
ty=(struct node*)malloc(sizeof(struct node));
ty->l=NULL;
switch(c)
{
case 1:
printf("In Input restricted deque insertion is not allowed at front");
goto abc;
case 2:
printf("\nEnter the number: ");
scanf("%d",&ty->d);
if(front==NULL)
{
ty->l=NULL;
front =ty;
rear=ty;
goto abc;
}
ty->l=NULL;
rear->l=ty;
rear=ty;
goto abc;
}
goto abc;
case 2:
printf("\n1.Front\t2.Rear\nEnter your choice: ");
scanf("%d",&c);
if (front==NULL)
printf("\nEmpty");
else if(c==1)
front=front->l;
else if(c==2)
{
ty2=front;
while(ty2->l->l!=NULL)
ty2=ty2->l;
free(ty2->l);
ty2->l=NULL;
rear=ty2;
}
goto abc;
case 3:
ty2=front;
while(ty2!=NULL)
{
printf("%d\n",ty2->d);
ty2=ty2->l;
}
goto abc;
case 4:
printf("\nThank you!");
exit (0);
break;
}
}
case 2:
{
abcd:
printf("\n\n\t***DEQUE***\n1.Insert\n2.Delete\n3.Display\n4.Exit");
printf("\nEnter the choice: ");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\n1.Front\t2. Rear\nEnter your choice: ");
scanf("%d",&c);
ty=(struct node*)malloc(sizeof(struct node));
ty->l=NULL;
switch(c)
{
case 1:
printf("\nEnter the number: ");
scanf("%d",&ty->d);
if(front==NULL)
{
ty->l=NULL;
front =ty;
rear=ty;
goto abcd;
}
ty->l=front;
front=ty;
goto abcd;
case 2:
printf("\nEnter the number: ");
scanf("%d",&ty->d);
if(front==NULL)
{
ty->l=NULL;
front =ty;
rear=ty;
goto abcd;
}
ty->l=NULL;
rear->l=ty;
rear=ty;
goto abcd;
}
goto abcd;
case 2:
printf("\n1.Front\t2.Rear\nEnter your choice: ");
scanf("%d",&c);
if (front==NULL)
printf("\nEmpty");
else if(c==1)
front=front->l;
else if(c==2)
{
printf("\nIn Output restricted deque Deletion is not allowed at rear");
}
goto abcd;
case 3:
ty2=front;
while(ty2!=NULL)
{
printf("%d\n",ty2->d);
ty2=ty2->l;
}
goto abcd;
case 4:
printf("\nThank you!");
exit (0);
break;
}
case 3:
printf("\nThank you!");
exit(0);
break;
}
}
return 0;
}