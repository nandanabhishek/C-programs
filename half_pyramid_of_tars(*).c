#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j;
    printf("enter the length of side of isosceles right triangle: ");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }

}
