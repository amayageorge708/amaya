#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[100];
int i;
printf("enter string:\n");
scanf("%s",str);
printf("%s\n",str);
for(i=0;i<=strlen(str);i++){
if(str[i]>=65&&str[i]<=90)
str[i]=str[i]+32;}
printf("new string is %s\n",str);
getch();
return 0;
}