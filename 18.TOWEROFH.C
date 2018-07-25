#include<stdio.h>
#include<conio.h>
void transfer( int n,char from, char to, char via)
{
 if(n==1)
 {
  printf("\nMove from %c to %c",from,to);
  return;
 }
 else
 {
  transfer((n-1),from,via,to);
  printf("\nMove from %c to %c",from,to);
  transfer((n-1),via,to,from);
  return;
 }
}
void main()
{
 int n;
 clrscr();
 printf("\nEnter the number of disk:");
 scanf("%d",&n);
 transfer(n,'a','b','c');
 getch();
}