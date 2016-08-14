#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter a number\n");
scanf("%d",&a);
if(a<0)
printf("positive\n");
else
printf("negative\n");
getch();
return 0;
}