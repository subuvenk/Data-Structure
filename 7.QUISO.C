#include<stdio.h>
#include<conio.h>
void quicksort(int[10],int,int);
void main()
{
 int x[20],size,i;
 clrscr();
 printf("Enter the maximum size of array :  ");
 scanf("%d",&size);
 printf("\nEnter the elements: \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&x[i]);
 }
 quicksort(x,0,size-1);
 printf("\nSorted array list using quick sort : \n");
 for(i=0;i<size;i++)
 {
 printf("%d\t",x[i]);
 }
 getch();
}
void quicksort(int x[10],int first,int last)
{
 int pivot,j,temp,i;
 if(first<last)
 {
   pivot =  first;
   i=first;
   j= last;
   while(i<j)
   {
    while(x[i]<=x[pivot]&&i<last)
    {
    i++;
    while(x[j]>x[pivot])
    j--;
    if(i<j)
    {
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
    }
    }
    temp = x[pivot];
    x[pivot]=x[j];
    x[j]=temp;
    quicksort(x,first,j-1);
    quicksort(x,j+1,last);
   }
 }
}