#include<stdio.h>
#include<math.h>
float sq_sqrt(float x);

int main()
{
    float a;
    printf("Enter a no to find its square and square root: ");
    scanf("%f",&a);
    sq_sqrt(a);

}
float sq_sqrt(float x)
{
    float sq,sq_rt;
    sq=pow(x,2);
    sq_rt=sqrt(x);
    printf("square and sq root of %f : %f and %f",x,sq,sq_rt);

}

