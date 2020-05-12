#include<stdio.h>
int main()
{
    int i,k,p,m;
    int a[7]={2,8,1,5,9,3,7};
    printf("elements of the given array are : ");
    for(i=0;i<7;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nenter the element to be searched: ");
    scanf("%d",&k);
    m=0;
    for(i=0;i<7;i++)
    {
        if (a[i]==k)
        {
        m=1;
        p=i;
        break;
        }
    }
    if(m==1)
        printf("%d is at '%d' place in the array.\n",k,p+1);
    else
        printf("element not found.");

    return 0;
}
