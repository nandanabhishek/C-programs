#include<stdio.h>
int even_odd(int x);
int main()
{
    int a;
    printf("enter the no to check even or odd : ");
    scanf("%d",&a);
    int b=even_odd(a);
    return 0;

}
int even_odd(int x)
{
    if(x%2==0)
        printf("%d is even.",x);
    else
        printf("%d is odd.",x);
    return 0;

}