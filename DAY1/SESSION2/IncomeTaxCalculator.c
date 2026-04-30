#include <stdio.h>

int main()
{
    int income,tax ;
    scanf("%d",&income);

    if (income<=250000)
        tax =0;
    else if (income<=500000)
        tax= 0.05*(income-250000);
    else if (income<=1000000)
        tax= 12500+0.2*(income-500000);
    else
        tax = 12500+ 100000 + 0.3*(income - 1000000);
    printf("TAX: %d",tax);
    return 0;
}