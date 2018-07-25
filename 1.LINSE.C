#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,t,flag=0;
clrscr();
printf("Enter the maximum size: \n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=1;i<=n;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter the number to be searched: \n");
scanf("%d",&t);
for(i=1;i<=n;i++)
{
 if(a[i]==t)
 {
  printf("The number is found in the %d position..",i);
  flag=1;
  break;
 }
}
if(flag==0)
{
 printf("Number is not found...");
}
getch();
}