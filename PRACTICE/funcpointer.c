#include <stdio.h>
#include <stdlib.h>

int *PrefixSum(int *arr[],int size)
{
    int *ans = (int*) malloc (sizeof(int)*size);
    int temp[size];
    arr[0] = temp[0];
    for (int i =1;i<size;i++)
    {
        temp[i] = temp[i-1]+arr[i];
    }

}
int main()
{
    return 0;
}