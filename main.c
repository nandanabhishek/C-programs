#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("enter an integer whose table u want to print: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
    return 0;

}