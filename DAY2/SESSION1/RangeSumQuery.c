#include <stdio.h>

int main()
{ // prefix sum - product
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int query;
    scanf("%d", &query);
    for (int i = 0; i < query; i++)
    {
        int l, r;
        int sum = 0;
        scanf("%d %d", &l, &r);
        for (int i = l; i <= r; i++)
        {
            sum += arr[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}