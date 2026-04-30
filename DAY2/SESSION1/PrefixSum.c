#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int prefixSum[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += arr[j];
        }
        prefixSum[i] = sum;

        // printf("%d %d\n",prefixSum[i],sum);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", prefixSum[i]);
    }
    return 0;
}

// PrefisSum + RangeSumQuery
/*
for (int i =1;i<n ;i++)
prefixsum[i] = prefixsum[i-1]+arr[i];
*/
/*
while(q--)
{
int left,right;
int sum;
if left ==0
sum = prefixsum[right];
else
sum = prefisum[right] - prefixsum[left -1];
}
*/