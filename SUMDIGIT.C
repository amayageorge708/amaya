#include<stdio.h>
#include<conio.h>
int findsum(int n)
{
int r,s;
if(n)
{
r=n%10;
s=s+r;
findsum(n/10);
}
else
return s;
}
int main()
{
int n,x;
printf("enter number:\n");
scanf("%d",&n);
x=findsum(n);
printf("sum of digits of %d is %d\n",n,x);
getch();
return 0;
}