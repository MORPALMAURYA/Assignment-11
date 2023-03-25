// Write a function to print first N prime numbers (TSRN)
int is_prime(int num)
{
    int i;
    if (num <= 1)
    {
        return 0;
    }
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void print_n_primes(int n)
{
    int i, count = 0, num = 2;
    while (count < n)
    {
        if (is_prime(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

#include <stdio.h>

int main()
{
    int n = 5;
    printf("The first %d prime numbers are:\n", n);
    print_n_primes(n);
    printf("\n");
    return 0;
}
