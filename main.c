#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("Enter the value of temperature in celsius ");
    scanf("%f", &celsius);
    fahrenheit = (1.8) * celsius + 32;
    printf("%.2f celsius=%.2f fahrenheit\n",celsius,fahrenheit);
    return 0;

}
