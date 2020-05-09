#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j;
    printf("enter the length of side of isosceles right triangle: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

}