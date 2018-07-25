#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,j,temp,pos;
 clrscr();
 printf("Enter the maximum size: \n");
 scanf("%d",&n);
 printf("Enter the numbers: \n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
   }
  }
 }
 printf("Sorted array list using selection sort is: ");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 getch();
}