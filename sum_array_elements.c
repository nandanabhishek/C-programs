#include<stdio.h>
int main()
{

    int s = 0,i;
    int n;
    printf("enter the size of array:");
    scanf("%d", &n);
    int A[n];
    printf("\nenter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        s = s + A[i];
    }
        printf("\nsum of array elements = %d", s);

    return 0;
}
