#include<stdio.h>
#include<math.h>

int main()
{
    float r;
    float area,volume;

    printf("Enter radius of the sphere : ");
    scanf("%f",&r);

    area =  4* 3.14 * r * r;
    volume = (4.0/3) * 3.14 * r * r * r;

    printf("Surface area of sphere is: %.3f",area);
    printf("\nVolume of sphere is : %.3f",volume);

    return 0;
}
