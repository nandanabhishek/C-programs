#include<stdio.h>
int max(int x, int y);
int main()
{
    int a,b;
    printf("enter any two integer to compare them :");
    scanf("%d %d",&a,&b);
    int c=max(a,b);
    printf("%d is larger of the two numbers",c);
    return 0;

}
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;

}