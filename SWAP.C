#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter a and b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf(" swapped:a=%d b=%d",a,b);
getch();
return 0;
}