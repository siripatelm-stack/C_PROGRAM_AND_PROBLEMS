#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0, minsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < minsum)
        {
            minsum = sum;
        }
    }
    int result = 1 - minsum;
    printf("%d ", result);
}