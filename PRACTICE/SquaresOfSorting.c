#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], result[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        int leftsqr = arr[left] * arr[left];
        int rightsqr = arr[right] * arr[right];
        if (leftsqr > rightsqr)
        {
            result[pos] = leftsqr;
            left++;
        }
        else
        {
            result[pos] = rightsqr;
            right--;
        }
        pos--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}
/*
int arr[] = {-4,-1,0,3,10};
    int n=5;
    int square[n];
    for (int i=0;i<n;i++)
    {
        square[i]=arr[i]*arr[i];
    }
    for (int i=0;i<n;i++)
    {
        int max =i;
        for (int j=i;j<n;j++)
        {
            if(square[max]<square[j])
            {
                int temp = square[max];
                square[max] = square[i];
                square[i] = temp;
            }
        }
    }
    for (int i =0;i<n;i++)
    {
        printf("%d ",square[i]);
    }
*/