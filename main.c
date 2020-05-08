#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter a no to check even or odd :");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);

}