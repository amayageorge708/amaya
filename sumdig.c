#include<stdio.h>
int sum (int n);
 
int main()
{
    int n, sum;
 
    printf("Enter the number: ");
    scanf("%d", &n);
    sum = digsum(n);
    printf("Sum of digits in %d is %d\n", n, sum);
    return 0;
}
 
int digsum (int n)
{int r,s=0;
    while (n != 0)
    {
        r=n%10;
        s=s+r;
        n=n/10;}
return s;
}
