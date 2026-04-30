#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0, maxcount = 0;
    for (int i=0;i<n;i++)
    {
        if (arr[i] == 1)   //485
        {
            count++;
            if (count > maxcount)
                maxcount = count;
        }
        else if (arr[i] == 0)
            count=0;
        else
            count =-1;
    }
    printf("%d",maxcount);
    
    return 0;
}

/*
5 
5 4 3 1 0 1
0
>a
5
1 0 1 0 1
1
*/