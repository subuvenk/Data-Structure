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
{
  scanf("%d",&a[i]);
}
  for(k=0;k<n;k++)
{
  for(i=0,j=1;j<n;i++,j++)
{
  if(a[i]>a[j])
{
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  }
}
}
  printf("Sorted  array list using insertion sort is: \n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  getch();
}