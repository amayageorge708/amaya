#include<stdio.h>
int main()
{
int n,i=1,count=0;;

scanf("%d",&n);
while(count<n)
{
if(i%2!=0)
{
printf("%d",i);

count++;
}
i++;
}

return 0;
}


