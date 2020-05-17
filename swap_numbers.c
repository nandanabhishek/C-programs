#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two number :");
    scanf("%d %d",&n1,&n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("\nAfter swapping two numbers are :%d ,%d\n",n1,n2);
    return 0;
}
