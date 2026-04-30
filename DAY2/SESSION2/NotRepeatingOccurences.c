#include <stdio.h>
#include <stdbool.h>
// function declaration  , why only in c?
bool uniqueOccurences(int arr[], int n)
{
    int freq[2001] = {0};
    int used[1001] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] + 1000]++;
    }

    for (int i = 0; i < 2001; i++)
    {
        if (freq[i] > 0)
        {
            if (used[freq[i]] == 1)
            {
                return false;
            }
            used[freq[i]] == 1;
        }
    }
    return true;
}
int main()
{

    int arr[] = {1, 2, 2, 1, 1, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(uniqueOccurences(arr,n))
    {
        printf("Pair repeating");
    }
    else
        printf("Not repeating");
    return 0;
}

/*

    int map[6] = {0};
    for (int i = 0; i < n; i++)
    {
        map[i]++;
    }
    for (int i =0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            return false;
        }
    }
    return true;
*/