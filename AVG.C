#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;float marks,avg,sum=0;
printf("enter number of students\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter marks of student i:\n",i);
scanf("%f",&marks);
sum=sum+marks;
}
avg=sum/n;
printf("average=%f",avg);
getch();
return 0;
}