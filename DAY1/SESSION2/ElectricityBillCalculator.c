#include <stdio.h>

int main()
{
    int electric_unit;
    int electric_bill;
    scanf("%d", &electric_unit);
    if (electric_unit <= 100)
    {
        electric_bill = electric_unit * 2;
    }
    else if (electric_unit <= 300)
    {
        electric_bill = (electric_unit - 100) * 4 + 100 * 2;
    }
    else if (electric_unit <= 500)
    {
        electric_bill = (electric_unit - 300) * 6 + 100 * 2 + 200 * 4;
    }
    else
    {
        electric_bill = (electric_unit - 500) * 10 + 100 * 2 + 200 * 4 + 200 * 6;
    }
    printf("BILL: %d", electric_bill);

}