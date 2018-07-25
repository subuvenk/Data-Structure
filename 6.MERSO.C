#include<stdio.h>
#include<conio.h>
void merge(int arr[100],int,int,int);
void part(int arr[100],int,int);
void main()
{
 int arr[100],i,size;
 clrscr();
 printf("Enter the maximum size: \n");
 scanf("%d",&size);
 printf("Enter the numbers:\n");
 for(i=0;i<size;i++)
  scanf("%d",&arr[i]);
 part(arr,0,size-1);
 printf("Sorted array list using merge sort is: \n");
 for(i=0;i<size;i++)
  printf("%d\t",arr[i]);
 getch();
}
void part(int arr[100],int min,int max)
{
 int mid;
 if(min<max)
 {
  mid=(min+max)/2;
  part(arr,min,mid);
  part(arr,mid+1,max);
  merge(arr,min,mid,max);
 }
}
void merge(int arr[],int min,int mid,int max)
{
 int tmp[100];
 int i,j,k,m;
 j=min;
 m=mid+1;
 for(i=min;j<=mid && m<=max;i++)
 {
  if(arr[j]<=arr[m])
  {
   tmp[i]=arr[j];
   j++;
  }
  else
  {
   tmp[i]=arr[m];
   m++;
  }
 }
  if(j>mid)
  {
   for(k=m;k<=max;k++)
   {
    tmp[i]=arr[k];
    i++;
   }
  }
  else
  {
   for(k=j;k<=mid;k++)
   {
    tmp[i]=arr[k];
    i++;
   }
  }
  for(k=min;k<=max;k++)
   arr[k]=tmp[k];
}