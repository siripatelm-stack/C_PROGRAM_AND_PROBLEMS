#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter a rows and columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j] = (i+1)*(j+1);
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    return 0;
}