/*
1. HRA = 20% of basic.
2. DA = 10% of basic.
3. GROSS = basic + HRA + DA.
4. PF deduction = 12% of basic.
5. Annual gross = GROSS * 12.
6. Annual tax (slab-based, applied on ANNUAL gross):
• Up to Rs 5,00,000: no tax.
• Rs 5,00,001 to Rs 10,00,000: 10% on the portion above 5L.
• Above Rs 10,00,000: flat Rs 50,000 on the 5L-10L slab + 20% on the portion above 10L.
1. Monthly tax = annual_tax / 12.
2. NET = GROSS - PF - monthly_tax.
*/

#include <stdio.h>
#include <stdlib.h>

long int salary(double basic)
{
    double HRA = basic * 0.2;
    double DA = basic * 0.1;
    double GROSS = basic + HRA + DA;
    float PF_deduction = GROSS * 0.12;
    long int annual_gross = (GROSS - PF_deduction) * 12;
    int annual_tax;
    if (annual_gross < 500000)
    {
        printf("ANNUAL = %d BELOW 5L , no tax\n",annual_gross);
        annual_tax = 0;
    }
    else if (annual_gross < 1000000)
    {
        printf("ANNUAL = %d in 5L - 10L \n",annual_gross);
        annual_tax = (annual_gross - 500000) * 0.10;
    }
    else
    {
        annual_tax = 50000 + (annual_gross - 1000000) * 0.20;
    }
    float monthly_tax = annual_tax / 12;
    long int net = GROSS - PF_deduction - monthly_tax;
    return net;
}

int main()
{
    double lpa;
    scanf("%ld", &lpa);
    printf("%ld", salary(lpa));
    return 0;
}