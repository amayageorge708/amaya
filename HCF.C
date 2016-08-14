#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,m,i;
printf("enter 2 numbers\n");
scanf("%d %d",&n1,&n2);
if(n1>n2)
m=n2;
else
m=n1;
for(i=m;i>=1;i--)
{
if(n1%i==0&&n2%i==0){
printf("HCF is%d",i);
break;
}
}
getch();
return 0;
}