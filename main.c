#include<stdio.h>
int main()
{
    int x, y;
    printf("enter any two numbers:-");
    scanf("%d%d", &x, &y);

    printf("before swapping:-\nx = %d\ny = %d\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("after swapping:-\nx = %d\ny = %d\n", x, y);

    return 0;
}