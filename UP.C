#include<stdio.h>
#include<conio.h>
int main()
{
char str[100];
int i;
printf("enter string\n");
scanf("%s",str);
printf("%s",str);
for(i=0;i<=strlen(str);i++){
if(str[i]>=97&&str[i]<=122)
str[i]=str[i]-32; }
printf("new string is %s\n",str);
getch();
return 0;
}