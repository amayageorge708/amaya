#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("enter a number:\n");
scanf("%d",&num);
if(num%2==0)
printf("%d is even\n",num);
else
printf("%d is odd\n",num);
getch();
return 0;
}