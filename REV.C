#include<stdio.h>
#include<conio.h>
int main()
{
int num,rev=0,r;
printf("enter num:\n");
scanf("%d",&num);
while(num)
{
r=num%10;
rev=rev*10+r;
num=num/10;
}
printf("reversed =%d",rev);
getch();
return 0;
}