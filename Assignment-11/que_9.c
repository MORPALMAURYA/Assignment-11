// Write a program in C to find the square of any number using the function.
#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}
