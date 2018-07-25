#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *rl,*ll;
}
*hd,*tl,*n;
void add_at_beg(int item)
{
n=(struct node *)malloc(sizeof(struct node));
n->data=item;
n->ll=NULL;
n->rl=NULL;
if(hd==NULL)
{
hd=n;
tl=n;
}
else
{
hd->ll=n;
n->rl=hd;
hd=n;
}
}
void disp()
{
struct node *pt;
if(hd==NULL)
{
printf("\nEMPTY LIST:");
return;
}
for(pt=hd;pt!=NULL;pt=pt->rl)
printf("\t%d",pt->data);
}
void add_at_end(int item)
{
n=(struct node*)malloc(sizeof(struct node));
n->data=item;
n->rl=NULL;
n->ll=NULL;
if(hd==NULL)
{
hd=n;
tl=n;
}
else
{
n->ll=tl;
tl->rl=n;
tl=n;
}
}
void add_at_i(int item1,int item)
{
int f=0;
struct node *pt;
for(pt=hd;pt!=NULL;pt=pt->rl)
{
if(pt->data==item1)
{
f=1;
break;
}
}
if(f==0)
{
printf("\n Search node does noe exist");
return;
}
n=(struct node *)malloc(sizeof(struct node));
n->data=item;
n->ll=NULL;
n->rl=NULL;
if(hd==NULL)
{
hd=n;
tl=n;
}
else
{
n->rl=pt->rl;
(pt->rl)->ll=n;
pt->rl=n;
n->ll=pt;
}
}
void del_at_beg()
{
struct node *pt;
if(hd==NULL)
{
printf("\nEmpty list");
return;
}
pt=hd;
hd=pt->rl;
free(pt);
hd->ll=NULL;
}
void del_at_end()
{
struct node *pt;
if(hd==NULL)
{
printf("\nEmpty list");
return;
}
pt=tl;
tl=pt->ll;
free(pt);
tl->rl=NULL;
}
void del_at_i(int item)
{
struct node *pt;
int f=0;
if(hd==NULL)
{
printf("\nEmpty list");
return;
}
for(pt=hd;pt!=NULL;pt=pt->rl)
{
if(pt->data==item)
{
f=1;
break;
}
}
if(f==0)
{
printf("\nSearch node does noe exist");
return;
}
for(pt=hd;pt!=NULL;pt=pt->rl)
{
if(pt->data==item)
{
pt->rl->ll=pt->ll;
pt->ll->rl=pt->rl;
free(pt);
}
}
}

void main()
{
int ch,item,item1;
clrscr();
printf("\n\t\tDOUBLY LINKED LIST MENU:\n1)Add the node at the first\n2)Add a node at the end\n3)Add a node at the specified position\n4)Delete the first node\n5)Delete the last node\n6)Delete the specified element\n7)Display the contents of the node\n8)Quit");
do
{
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter the data for the node: ");
scanf("%d",&item);
add_at_beg(item);
disp();
break;
case 2:
printf("\nEnter the data for the node: ");
scanf("%d",&item);
add_at_end(item);
disp();
break;
case 3:
printf("\nEnter the data after which the node has to be inserted: ");
scanf("%d",&item1);
printf("\nEnter the data for the node: ");
scanf("%d",&item);
add_at_i(item1,item);
disp();
break;
case 4:
del_at_beg();
if(hd!=NULL)
{printf("\nThe first node is deleted");
disp();}
break;
case 5:
del_at_end();
printf("\nThe last node is deleted");
disp();
break;
case 6:
printf("\nEnter the data to be deleted:");
scanf("%d",&item);
del_at_i(item);
disp();
break;
case 7:
printf("\nThe contents of the node are: ");
disp();
break;
default:
printf("\n Thank you!!");
}
}
while(ch<=7);
getch();
}