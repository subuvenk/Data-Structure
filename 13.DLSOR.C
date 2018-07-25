#include<stdio.h>
#include<conio.h>
struct node
{
struct node*prev;
int data;
struct node *next;
}
*head,*ptr2,*ptr,*ptr1;
void main()
{
int no;
int temp;
int num;
clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->prev=NULL;
ptr=head;
printf("\nEnter the elements (press -999 to quit inserting): \n");
do
{
scanf("%d",&no);
ptr->data=no;
if(no!=-999)
{
ptr2=(struct node*)malloc(sizeof(struct node));
ptr->next=ptr2;
ptr2->prev=ptr;
ptr=ptr->next;
}
}
while(no!=-999);
ptr->next=NULL;
ptr=head;
clrscr();
printf("\nThe elements are: \n");
while(ptr->next!=NULL)
{
printf("\t%d",ptr->data);
ptr=ptr->next;
}
for(ptr=head;ptr->next!=NULL;ptr=ptr->next)
for(ptr1=ptr->next;ptr1->next!=NULL;ptr1=ptr1->next)
{
if(ptr->data>ptr1->data)
{
temp=ptr->data;
ptr->data=ptr1->data;
ptr1->data=temp;
}
}

printf("\nThe sorted list is:\n");
ptr=head;
while((ptr!=NULL)&&(ptr->data!=-999))
{
printf("\t%d",ptr->data);
ptr=ptr->next;
}
getch();
}