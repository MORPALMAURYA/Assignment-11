// Write a function to find the next prime number of a given number. (TSRS)

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

int next_prime(int num)
{
    int next_num = num + 1;
    while (!is_prime(next_num))
    {
        next_num++;
    }
    return next_num;
}
#include <stdio.h>

int main()
{
    int num = 7;
    int next_num = next_prime(num);
    printf("The next prime number after %d is %d\n", num, next_num);
    return 0;
}
