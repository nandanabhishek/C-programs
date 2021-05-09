/* C program for Tower of Hanoi */
/* Application of Recursive function */

#include <stdio.h>

void hanoi_fun(int n, char fr, char tr, char ar) //fr=from rod, tr =to rod, ar=aux rod
{
    if (n == 1) // base case
    {
        printf("\nMove disk 1 from rod-%c to rod-%c", fr, tr);
        return;
    }
    hanoi_fun(n-1, fr, ar, tr);
    printf("\nMove disk %d from rod-%c to rod-%c", n, fr, tr);
    hanoi_fun(n-1, ar, tr, fr);
}


int main()
{
    int n; // n = number of discs
    printf("\nEnter the number of discs : ");
    scanf("%d", &n);
    hanoi_fun(n, 'A', 'C', 'B');  // A, B and C are the name of rod
    return 0;
}
