#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%u ",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    int i=0;
    while(i<5)
    {
        printf("%d ",*(ptr+i));
        i++;
    }

    return 0;
}