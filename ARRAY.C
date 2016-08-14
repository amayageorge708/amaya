#include<stdio.h>
#include<conio.h>
int main()
{
int i,arr[1000],n;
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter numbers:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("elements are:\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
getch();
return 0;
}