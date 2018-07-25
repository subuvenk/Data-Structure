#include<stdio.h>
#include<conio.h>
fibo(int n)
{
 if(n==0)
  return 0;
 else if(n<=2)
  return 1;
 else
  return fibo(n-1)+fibo(n-2);
}
void main()
{
 int n,i,j=0;
 clrscr();
 printf("\nEnter the number of terms: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("%d\n",fibo(j));
  j++;
 }
 getch();
}