#include<stdio.h>
#include<conio.h>
int main()
{
char c;
printf("enter character:\n");
scanf("%c",&c);
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':printf("vowel\n");
default:printf("consonant\n");
}
getch();
return 0;
}