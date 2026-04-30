#include<stdio.h>
#include <stdlib.h>

void bubblesort(int nums[],int n)
{

}
int comparator (const void *a, const void *b)
{
    return(*(int*)b -*(int*)a);//desc
}
int ThirdMaxFind(int nums[],int n)
{
    qsort(nums,n,sizeof(int),comparator);
    int count =1;//first distinct element

    for (int i = 1; i < n; i++)
    {
        if(nums[i]!=nums[i-1])
        {
            count++;
            if(count ==3)
            {
                return nums[i];
            }
        }
    }
    return nums[0];
}
int main()
{
    int n;
    int nums[n];
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("%d",ThirdMaxFind(nums,n));
    return 0;
}