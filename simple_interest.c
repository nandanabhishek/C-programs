#include <stdio.h>

int main()
{
    float p,r,t,si;
    printf("Enter principal,rate and time respectively: ");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("S.I = %.2f\n",si);

}
