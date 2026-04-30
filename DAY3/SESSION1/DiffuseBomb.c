#include <stdio.h>
// gwt
void bomb(int arr[], int k, int n)
{
    int output[n];
    int left = 0, right = 0;
    if (k > 0)
    {
        while (left <= right)
        {
        }
    }
    else if (k < 0)
    {
        /* code */
    }
}

int main()
{
    int n;
    int k;
    scanf("%d", &n);

    int result[n], code[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &code[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
    {
        if (k > 0)
        {
            int index = (i + k) % n;
            int sum = 0;
            for (int j = i + 1; j <= index; j++)
            {
                sum += code[j];
            }
            result[i] = sum;
        }
        else if (k < 0)
        {
            int index = (i + k) % n;
            int sum = 0;
            for (int j = i + 1; j <= index; j++)
            {
                sum += code[j];
            }
            result[i] = sum;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                result[i] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

/*
if (k>0)
{
    for (int i=0;i<n;i++)
    {
        int sum =0;
        for (int j =1;j<=k;j++)
        {
            sum = sum +code[(i+j)%n];
        }
        result [i] = sum;
    }
}
else if(k<0)
{
    k=-k;
    int temp[2*n];
    for (int i =0;i<2*n;i++)
    {
        temp[i] = code [i%n];
    }
    int prefixsum[2*n];
    prefixsum[0]  = temp[0];
    for (int i =1;i<2*n;i++)
    {
    prefixsum[i]  = prefixsum[i-1]+temp[i];
    }
    for (int i =0;i<n;i++)
    {
        int left =i+n-k;
        int right = i+n-1;
        if(left ==0 )
            result[i] = prefixsum[right];
        else
            result [i] = prefixsum[right] - prefixsum[left -1];
    }

}
*/