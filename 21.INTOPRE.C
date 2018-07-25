#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
char a[100],s[100],b[100];
int t,i;
char y;
void push(char x)
{
t++;
s[t]=x;
}
int pop()
{
y=s[t];
t--;
return y;
}
int value(char c)
{
if(c=='+')
return 0;
if(c=='-')
return 0;
if(c=='*')
return 1;
if(c=='/')
return 1;
if(c=='^')
return 2;
else
return -1;
}
void main()
{
int j,y,x,l;
clrscr();
t=-1;
printf("\n\n\tEnter your infix expression: ");
gets(a);
l=strlen(a);
j=l-1;
for(i=l;i>=0;i--)
{
if(a[i]>='a'&&a[i]<='z')
{
b[j]=a[i];
j--;
}
else if(a[i]==')')
{
push(a[i]);
}
else if(a[i]=='(')
{
while(t!=-1&&s[t]!=')')
{
b[j]=s[t];
j--;
pop();
}
pop();
}
else if((a[i]=='+')||(a[i]=='-')||(a[i]=='*')||(a[i]=='/')||(a[i]=='^'))
{
if(t==-1)
{
push(a[i]);
}
else
{
do
{
x=value(a[i]);
y=value(s[t]);
if(y>x)
{
b[j]=s[t];
j--;
pop();
}
}
while(y>x);
push(a[i]);
}}}
while(t!=-1)
{
b[j]=s[t];
j--;
pop();
}
printf("\n\n\tPrefix expression: ");
for(i=0;i<l;i++)
{
printf("%c",b[i]);
}
getch();
}