// Write a function to check whether a given number is Prime or not. (TSRS)
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
#include <stdio.h>

int main()
{
    int num = 7;
    if (is_prime(num))
    {
        printf("%d is prime\n", num);
    }
    else
    {
        printf("%d is not prime\n", num);
    }
    return 0;
}
