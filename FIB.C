#include<stdio.h>
#include<conio.h>
int main()
{
int k,r,f,i=0,j=1;
printf("enter range:\n");
scanf("%d",&r);printf("fibonnaci series:\n");
printf("%d %d\t",i,j);
for(k=2;k<=r;k++)
{
f=i+j;
i=j;
j=f;
printf("%d\t",j);
}
getch();
return 0;
}