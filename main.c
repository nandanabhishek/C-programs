#include<stdio.h>
#include<math.h>
int main()
{
    float a,sq,sqrt;
    printf("enter a positive number to find its square and sq root :");
    scanf("%f",&a);
    sq=pow(a,2);
    sqrt=pow(a,0.5);
    printf("square and sq root of %f = %f and %f",a,sq,sqrt);
    return 0;

}