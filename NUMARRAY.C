#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,large,small,a[100];
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large=a[0];
for(i=0;i<n;i++){
if(a[i]>large)
large=a[i];
}
printf("largest element is %d\n",large);
small=a[0];
for(i=0;i<n;i++){
if(a[i]<small)
small=a[i];
}
printf("smallest element is %d\n", small);
getch();
return 0;
}