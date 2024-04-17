#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;
    i=1;
    while(i<=10)
    {
        i += 2;
        sum += i;
        printf("%d ",sum);
    }

    printf("%d",sum);

    return 0;
}
