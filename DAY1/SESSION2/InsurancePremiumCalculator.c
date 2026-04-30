/*
Compute health insurance monthly premium:
1. Base premium = Rs 1000.
2. Age surcharge: if age > 50, add 50% of base. If age > 65, add another 50% of base (total
100% surcharge).
3. Gender factor: if FEMALE, multiply current premium by 0.95 (5% discount).
4. Loyalty discount: if years_as_customer >= 5, subtract 10% of CURRENT premium (after
above adjustments).
5. Round final to 2 decimals.
Inputs: age (int), gender (MALE / FEMALE), years_as_customer (int). Print PREMIUM
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int base_premium = 1000;
    int age, year_as_customer;
    int surcharge=0;
    char gender[10];

    //final_premium = ((base+agesurcharge)*gender_factor)*loyality_discount

    scanf("%d %s %d", &age, gender, &year_as_customer);
    if (age > 50)
        surcharge += base_premium * 0.5;
    if (age > 65)
        surcharge += base_premium * 0.5;
    base_premium += surcharge;
    if (strcmp(gender,"FEMALE")==0)
        {
            base_premium = base_premium * 0.95;
        //printf("%d -> 0.95\n",base_premium);
        }
    if (year_as_customer >= 5)
        {
            base_premium = base_premium * 0.9;
        //printf("%d -> 0.9\n",base_premium);
        }

    printf("%d",(base_premium));
}