#include <stdio.h>
int longestWindows(int arr[],int n,int k)
{
    int left = 0, right = 0;
    int maxLen =0;
    for(right=0;right<n;right++)
    {
        while (arr[right]-arr[left]<k)
        {
            left++;
        }
        int len = right -left +1;
        if (len>maxLen)
        {
            maxLen=len;
        }
    }
    return maxLen;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    return 0;
}

/*
int left = 0, right = 0;
    int maxSize = 0;
    while (left < n && right < n)
    {
        if (arr[left] + arr[right] <= k)
        {
            maxSize = right - left;
            right++;
            break;
        }
        left++;
    }
    printf("%d", longestWindows(arr,n,k));
*/