#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],s,n,x,temp=0,high,i,j,count=0,t=0;
 clrscr();
 printf("Enter the maximum size: ");
 scanf("%d",&s);
 printf("Enter the numbers: \n");
 for(i=0;i<s;i++)
	scanf("%d",&a[i]);
 for(i=0;i<s;i++)
  { 
   for(j=i+1;j<s;j++)
   {
	 if(a[i]>a[j])
	  {
	   temp = a[i];
	   a[i] = a[j];
	   a[j] = temp;
          }
   }
 }
  x=s;
  if(s%2==0)
	s=s/2;
  else
	s=(s/2)+1;
  printf("Enter the number to be searched: ");
  scanf("%d",&n);
  if(n<a[s])
  {
	for(i=0;i<s;i++)
		if(a[i]==n)
		 {
		   count++;
		   t=1;
		 }
  }
  else
  {	for(i=s;i<x;i++)
		if(a[i]==n)
		{
		 count++;
		 t=1;
		}
  }
 if(t==1)
	printf("Number found.\nIt is present %d times.",count);
 else
	printf("Number not found");
 getch();
}
