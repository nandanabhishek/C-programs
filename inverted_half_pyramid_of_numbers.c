#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j;
    printf("enter the length of side of isosceles right triangle: ");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }

}
