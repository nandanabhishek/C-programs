#include <stdio.h>


int main()
{

    float b;
    char c;
    int a;
    printf("Enter an integer number, a floating point number and a character respectively:");

    scanf("%d\n%f\n%c", &a,&b,&c);
    printf("Inputed values are :\n");
    printf("%d  %f  %c\n", a, b, c);
    return 0;
}