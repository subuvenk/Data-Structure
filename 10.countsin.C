#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}
*ptr,*head,*ptr2;
void main()
{
int no,i=0,key,count=0;
clrscr();
head=(struct node *)malloc(sizeof(struct node));
ptr=head;
printf("\nEnter the data (press -999 to quit inserting) : \n");
do
{
scanf("%d",&no);
ptr->data=no;
if(no!=-999)
{
ptr2=(struct node *)malloc(sizeof(struct node));
ptr->next=ptr2;
}
ptr=ptr->next;
}
while(no!=-999);
ptr->next=NULL;
printf("\nEnter the data of the element to be counted: ");
scanf("%d",&key);
ptr=head;
printf("\nElement is at the position: ");
while(ptr->next!=NULL)
{
count++;
if(ptr->data==key)
{
printf("\n%d",count);
i++;
}
ptr=ptr->next;
}
if(i==0)
printf("\nElement does not occur in the list:");
else
printf("\nElement occurs %d times in the list.",i);
getch();
}