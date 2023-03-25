// Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>

int calculate_lcm(int num1, int num2)
{
    int lcm = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            return lcm;
        }
        lcm++;
    }
}

int main()
{
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    lcm = calculate_lcm(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
