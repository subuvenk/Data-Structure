#include<stdio.h>
#include<conio.h>
struct link
{
int item;
struct link *next;
};
typedef struct link node;
void addfirst();
void addlast();
void addmid();
void delfirst();
void dellast();
void delmid();
void display();
node *head=NULL;

void main()
{
int ch;
clrscr();
do
{
printf("\nSINGLY LINKED LIST MENU:\n1.Addion at first\n2.Addition at middle\n3.Addition at last\n4.Deletion at first\n5.Deletion at middle\n6.Deletion at last\n7.Display\n8.Exit\n");
printf("enter your option:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
addfirst();
display();
break;
case 2:
addmid();
display();
break;
case 3:
addlast();
display();
break;
case 4:
delfirst();
display();
break;
case 5:
delmid();
display();
break;
case 6:
dellast();
display();
break;
case 7:
display();
break;
case 8:
printf("\nThank you!");
exit(0);
break;
default:
printf("You have entered a wrong choice.");
}
}
while(ch<=8);
getch();
}

void addfirst()
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("Enter the data:\t");
scanf("%d",&temp->item);
temp->next=head;
head=temp;
}

void addmid()
{
int i=1,pos;
node *cur=head,*temp;
printf("\nEnter the position: ");
scanf("%d",&pos);
while((pos!=i+1)&&(cur!=NULL))
{
cur=cur->next;
i++;
}
if(pos==i+1)
{
temp=(node *)malloc(sizeof(node));
printf("Enter the data: ");
scanf("%d",&temp->item);
temp->next=cur->next;
cur->next=temp;
}
}

void addlast()
{
node *temp,*cur=head;
temp=(node *)malloc(sizeof(node));
printf("Enter the data: ");
scanf("%d",&temp->item);
while(cur->next!=NULL)
{
cur=cur->next;
}
temp->next=cur->next;
cur->next=temp;
}

void delfirst()
{
node*temp=head;
head=head->next;
printf("Deleted item is %d\n",temp->item);
free(temp);
}

void delmid()
{
int i=1,pos;
node *cur=head,*temp;
printf("Enter the position to be deleted:\t");
scanf("%d",&pos);
while((pos!=i+1)&&(cur->next!=NULL))
{
cur=cur->next;
i++;
}
if(pos==i+1)
{
temp=cur->next;
cur->next=temp->next;
printf("Deleted item is %d\n",temp->item);
free(temp);
}
}

void dellast()
{
node *temp,*cur=head;
while(cur->next->next!=NULL)
{
cur=cur->next;
}
temp=cur->next;
cur->next=NULL;
printf("Deleted item is %d\n",temp->item);
free(temp);
}

void display()
{
node *cur=head;
while(cur!=NULL)
{
printf("\t%d",cur->item);
cur=cur->next;
}
}

