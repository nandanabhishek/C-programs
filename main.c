#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count=0;
    printf("enter a no to check whether prime or not :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count>2)
        printf("%d is not prime",n);
    else
        printf("%d is prime",n);


}