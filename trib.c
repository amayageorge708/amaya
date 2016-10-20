#include<stdio.h>
int main()
{int num,f=0,s=1,t=1,sum=0,i;
printf("\nEnter the number:");
scanf("%d",&num);
printf("%d\t%d\t%d",f,s,t);
for(i=3;i<num;i++) 
{
sum=f+s+t;
printf("\t%d ",sum);
f=s;
s=t;
t=sum;
}return 0;

}

