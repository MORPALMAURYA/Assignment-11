// Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//  function.
#include <stdio.h>

int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

double series_sum(int n)
{
    double sum = 0.0;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main()
{
    int n = 5;
    double sum = series_sum(n);
    printf("The sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 is: %lf\n", sum);
    return 0;
}
