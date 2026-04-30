#include <stdio.h>
#include <string.h>

int *finalPrices(int *prices[],int priceSize,int *returnsize)
{
    int *ans = (int*) malloc(sizeof(int)*priceSize);//malloc defaultly stores string so type cast

    int stack[500];
    int top =-1;

    for (int i = 0; i < priceSize; i++)
    {
        while (top!=-1 && prices[stack[top]]>=prices[i])
        {
            int index = stack[top--];
            ans[index] = prices[index] - prices[i];
        }
        stack[++top] = 1;
        
    }
    *returnsize = priceSize;
    return ans;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int prices[n];
    for (int i =0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }

    int discount[n];
    int top =1;
    
    for (int i=0;i<n;i++)
    {
        printf("%d ",discount[i]);
    }
    
    return 0;
}
//DMA 
/*
for (int i = 0; i < n; i++)
    {
        
        if (prices[i]<prices[top])
        {
            discount[i] = prices[i] - prices[top];
        }
        else if (prices[i]>prices[top])
        {
            top++;
        }
        else{
            discount[i] = prices[i];
        }
    
    }
*/