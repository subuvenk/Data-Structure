#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *next;
}*ptr,*ptr1,*ptr2,*head;
void main()
{
int num,choice,key,i=0,count=0,no;
char ch1;
clrscr();
ptr=(struct node *)malloc(sizeof(struct node));
head->next=NULL;
ptr=head;
printf("\n Enter the data (press -999 to quit inserting):\n");
do
{
scanf("%d",&no);
if(no!=-999)
{
ptr->next=(struct node *)malloc(sizeof(struct node));
ptr=ptr->next;
ptr->data=no;
ptr->next=head;
i++;
}
}
while(no!=-999);
label:
printf("\n 1.Insertion \t 2. Deletion \n Enter the choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
ptr1=(struct node *)malloc(sizeof(struct node));
printf("\n Enter new element: ");
scanf("%d",&ptr1->data);
printf("\n a.Head node \t b.Intermediate node \t c. Last node \n Enter the choice: ");
scanf("%s",&ch1);
ptr=head->next;
ptr2=head;
switch(ch1)
{
case 'a':
{
ptr2->next=ptr1;
ptr1->next=ptr2;
i++;
ptr=head->next;
count=i;
printf("\n The circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
goto label;
}
case 'b':
{
num=1;
count=i;
printf("\n Enter the position: ");
scanf("%d",&key);
while(count)
{
if(num==key)
{
ptr2->next=ptr1;
ptr1->next=ptr;
i++;
ptr=head->next;
count=i;
printf("\n The circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
}
else
{
ptr2=ptr2->next;
ptr=ptr->next;
}
num++;
count--;
}
goto label;
}
case 'c':
{
count=i;
while(count)
{
ptr2=ptr2->next;
count--;
}
ptr2->next=ptr1;
ptr1->next=ptr;
i++;
ptr=head->next;
count=i;
printf("\n The circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
goto label;
}
}
case 2:
{
printf("\n a.Head node\t b.Intermediate node\t c.Last node \n Enter the choice: ");
scanf("%s",&ch1);
ptr=head->next;
ptr2=head;
switch(ch1)
{
case 'a':
{
ptr2->next=ptr->next;
free(ptr);
i--;
ptr=head->next;
count=i;
printf("\nThe circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
goto label;
}
case 'b':
{
printf("\n Enter the position to be deleted: ");
scanf("%d",&key);
num=1;
count=i;
while(count)
{
if(num==key)
{
ptr2->next=ptr->next;
free(ptr);
i--;
ptr=head->next;
count=i;
printf("\nThe circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
}
else
{
ptr2=ptr2->next;
ptr=ptr->next;
}
num++;
count--;
}
goto label;
}
case 'c':
{
count=i;
num=0;
while(count)
{
num++;
ptr2=ptr2->next;
ptr=ptr->next;
count--;
}
ptr=head->next;
ptr2=head;
while(num!=1)
{
num--;
ptr2=ptr->next;
ptr=ptr->next;
}
if(num==1)
{
ptr2->next=ptr->next;
free(ptr);
i--;
ptr=head->next;
count=i;
printf("\nThe circular link list is: ");
while(count)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
count--;
}
}
goto label;
}
}
}
}
default:
exit(0);
}
getch();
}





