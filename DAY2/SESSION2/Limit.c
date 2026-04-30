#include <stdio.h>

int minEatingValue(int bunches[], int n, int hours)
{
    int left = 1;
    int right = 0;

    for (int i = 1; i < n; i++)
    {
        if (bunches[i] > right)
        {
            right = bunches[i];
        }
    }

    int answer = right;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int totalHours = 0;
        for (int i = 0; i < n; i++)
        {
            totalHours += (bunches[i] + mid - 1) / mid;
        }
        if (totalHours <= hours)
        {
            answer = mid;
            right = mid + 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return answer;
}

int main()
{
    int arr[] = {3, 6, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int h = 8;
    printf("%d", minEatingValue(arr, n, h));
    return 0;
}

// binary search