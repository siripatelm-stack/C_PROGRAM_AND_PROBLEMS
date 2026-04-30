#include <stdio.h>

int main()
{
    int arr[] = {6000, 5500, 4800, 5200, 53000, 5100};
    int target = 5000;
    int n= 7;
    int sum =0;
    for (int i =0 ; i<n ;i++)
    {
        sum+= arr[i];
    }
    int avg=sum/n;
    if (sum >= target)
    {
        printf("%d DAYS",n);
    }
    else{
        printf("NO STREAK");
    }
    return 0;
}   