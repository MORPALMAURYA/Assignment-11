// Write a function to print all Prime numbers between two given numbers. (TSRN)

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

void print_primes_between(int start, int end)
{
    int i;
    if (start <= 1)
    {
        start = 2;
    }
    for (i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}

#include <stdio.h>

int main()
{
    int start = 2;
    int end = 20;
    printf("The prime numbers between %d and %d are:\n", start, end);
    print_primes_between(start, end);
    printf("\n");
    return 0;
}
