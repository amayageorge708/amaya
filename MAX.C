#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("enter two numbers:\n");
scanf("%d %d",&a,&b);
if(a>b)
printf("max=%d",a);
else
printf("max=%d",b);
getch();
return 0;
}
