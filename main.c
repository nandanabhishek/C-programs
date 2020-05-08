#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,ci;
    printf("Enter the value of principal,rate,time : ");
    scanf("%f%f%f",&p,&r,&t);
    a=p*pow((1+(r/100)),t);
    ci=a-p;
    printf("C.I = %f",ci);
    return 0;
}