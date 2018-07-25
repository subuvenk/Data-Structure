#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n,i,j,k,t;
 clrscr();
 printf("Enter the maximum size: \n");
 scanf("%d",&n);
 printf("Enter the numbers: \n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  for(j=0;j<(n-1);j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 printf("The sorted list using bubble sort is: \n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);
 getch();
}
