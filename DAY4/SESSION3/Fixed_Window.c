#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",scores[i]);
    }
    
    int left=0;
    int right =k;

    while (left<=right && right <n)
    {
        int maxavg=0,avg=0,sum=0;
        for (int i = left; i <=right; i++)
        {
            sum+=scores[i];
        }
        avg = sum/k;
        if (maxavg<avg)
        {
            maxavg=avg;
        }
        
    }

    return 0;
}

/*
long sum =0;
for(int i =0;i<k;i++)
{
    sum+=arr[i];
}
long maxsum=sum;
int start=0;

// sliding window
for (int i=0;i<n;i++)
{
    sum =sum -arr[i-k]+arr[i];
    if(sum<maxsum){
    maxsum =sum;
    start +=k;
    
    }
}
*/