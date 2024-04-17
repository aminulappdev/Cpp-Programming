#include <stdio.h>
int main()
{

    int num1, num2;
    scanf("%d %d", &num1, &num2); // input function
    if(num1<num2)
    {
        printf("First number small : %d",num1);
    }
    else if(num1>num2)
    {
        printf("Second number small : %d",num2);
    }
    else
    {
        printf("Numbers are equal");
    }

}