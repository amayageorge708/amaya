#include<stdio.h>
#include<conio.h>
int main()
{
int r,i,j;
printf("enter range\n");
scanf("%d",&r);
for(i=1;i<=r;i++) {
for(j=1;j<=10;j++)
printf("%d*%d=%d\n",i,j,i*j);
}
getch();
return 0;
}