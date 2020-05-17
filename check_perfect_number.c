#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter a no to check whether it is perfect no or not: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }

    if(sum==n)
        printf("%d is a perfect no",n);
    else
        printf("%d is not a perfect no",n);

}
