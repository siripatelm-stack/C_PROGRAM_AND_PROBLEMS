#include <stdio.h>
void Pair(int arr[], int n, int target)
{
    int left, right = 0;
    for (right = 0; right < n; right++)
    {
        if (arr[left] + arr[right] == target)
        {
            left++;
            printf("PAIR FOUND - %d %d\n", arr[left], arr[right]);
            break;
        }
        left++;
    }
    printf("PAIR NOT FOUND");
}
int main()
{
    // 5,15,[2 4 7 11 15]
    int arr[] = {2, 4, 7, 11, 15};
    int n = 5;
    int target = 15;
    //Pair(arr,n,target);

    
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            printf("%d %d\n", arr[left], arr[right]);
            found = 1;
            return 0;
        }
        else if (sum < target)
        {
            left++;
        }
        else
            right++;
    }
    printf("PAIR NOT FOUND");
    

    return 0;
}