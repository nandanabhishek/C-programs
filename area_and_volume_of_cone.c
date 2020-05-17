#include<stdio.h>
int main()
{
float csa,tsa,vol,r,l,h;
printf("enter the value of radius,slant height and height of a cone :");
scanf("%f %f %f",&r,&l,&h);
csa=3.14*r*l;
tsa=(3.14*r*l)+(3.14*r*r);
vol=(3.14*r*r*h)/3;
printf("csa=%.2lf \ntsa=%.2lf \nvol=%.2lf",csa,tsa,vol);
}
