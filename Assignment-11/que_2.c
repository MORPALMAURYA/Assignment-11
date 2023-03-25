// Write a function to calculate HCF of two numbers. (TSRS)
int calculate_hcf(int num1, int num2)
{
    int smaller_num, i, hcf;
    if (num1 < num2)
    {
        smaller_num = num1;
    }
    else
    {
        smaller_num = num2;
    }
    for (i = 1; i <= smaller_num; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
#include <stdio.h>

int main()
{
    int num1 = 12, num2 = 18;
    int hcf = calculate_hcf(num1, num2);
    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}
