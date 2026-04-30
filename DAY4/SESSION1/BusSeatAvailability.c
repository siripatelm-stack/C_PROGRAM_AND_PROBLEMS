#include <stdio.h>

int findMinimumNumberSeat(int total, int booked, int arr[])
{
    int map[total];
    for (int i = 0; i < total; i++)
    {
        //
    }
}

int main()
{
    int S, B;
    scanf("%d %d", &S, &B);
    int booked[B];

    for (int i = 0; i < B; i++)
    {
        scanf("%d", &booked[i]);
    }

    if (B == 0)
    {
        printf("1");
        return 0;
    }
    int low = 0, high = B - 1;
    int mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (booked[mid] == mid + 1)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (low == B)
    {
        if (B == S)
        {
            printf("FULL");
        }
    }
    else
    {
        printf("%d", mid + 1);
    }

    return 0;
}