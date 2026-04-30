#include <stdio.h>
#include <stdlib.h>
//set+binarysearch
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); // asc
}

int tirdMax(int nums[], int n)
{
    qsort(nums, n, sizeof(int), compare);

    int unique[n];
    int k = 0; // keep

    unique[k++] = nums[0];
    // distinct element

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            unique[k++] = nums[i];
        }
    }
    if (k < 3)
    {
        return nums[k - 1];
    }

    // BINARY SEARCH
    int low = 0, high = k - 1;
    int target = k - 3;
    while (low <= high)
    {
        int mid = (high + low) / 2;

        if (mid == target)
        {
            return unique[mid];
        }
        else if (mid < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("%d",tirdMax(nums,n));
    return 0;
}