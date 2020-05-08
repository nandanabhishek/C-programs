#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter an integer to find sum of it upto that term: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+i;
    printf("required sum= %d",sum);

}