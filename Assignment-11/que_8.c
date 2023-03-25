// Write a function to print PASCAL Triangle. (TSRN)

void print_pascal_triangle(int n)
{
    int i, j, coef = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int n = 5;
    printf("Pascal Triangle for %d rows:\n", n);
    print_pascal_triangle(n);
    return 0;
}
