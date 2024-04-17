#include <stdio.h>
int main()
{

    int num1, num2;
    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2); // input function

    int sum, sub, mul, div;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    printf("%d\n%d\n%d\n%d", sum, sub, mul, div);
}