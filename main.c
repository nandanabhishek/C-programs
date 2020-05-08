#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a;
    printf("enter a positive integer whose factorial you want to find: ");
    scanf("%d",&n);
    a=n;
    for(i=n-1;i>=1;i--)
        n=n*i;
    printf("factorial of %d = %d",a,n);
    return 0;

}