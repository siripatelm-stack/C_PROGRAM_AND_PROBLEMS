#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter n and m values ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    // int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[n][m]);
        }
    }
    int transpose[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            a[i][j] = transpose[j][i];
    
        }
    }
    /*
    for (int i =0 ;i<n; i++)
    {
        int t = transpose[i][0];
       transpose[i][0] =transpose[i][n - 1];
       transpose[i][n - 1] = t;
    }
    */
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}