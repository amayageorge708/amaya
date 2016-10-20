#include<stdio.h>
int ispalindrome(int n);
int main()
{
int n;
scanf("%d",&n);
if(ispalindrome(n)==1)
printf("%d is palindrome\n",n);
else
printf("%d is not palindrome\n",n);
return 0;
}
int ispalindrome(int n)
{
int org;
org=n;
int rem,rev=0;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(org==rev)
return 1;
else
return 0;
}
