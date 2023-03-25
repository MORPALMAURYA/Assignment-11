// Write a function to print first N terms of Fibonacci series (TSRN)

void print_fibonacci_series(int n)
{
    int i, num1 = 0, num2 = 1, next_num;
    printf("%d %d ", num1, num2);
    for (i = 3; i <= n; i++)
    {
        next_num = num1 + num2;
        printf("%d ", next_num);
        num1 = num2;
        num2 = next_num;
    }
}

#include <stdio.h>

int main()
{
    int n = 10;
    printf("The first %d terms of the Fibonacci series are:\n", n);
    print_fibonacci_series(n);
    printf("\n");
    return 0;
}
