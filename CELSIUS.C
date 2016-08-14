#include<stdio.h>
#include<conio.h>
int main()
{
float c,f;
printf("enter temperature in celsius:\n");
scanf("%f",&c);
f=(1.8*c)+32;
printf("temperature in nfahrenheit=%f",f);
getch();
return 0;
}