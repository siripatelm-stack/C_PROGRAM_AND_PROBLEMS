// types of recursion -> nested ,
// call stack
#include <stdio.h>

int climbingStairs(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return climbingStairs(n - 1) + climbingStairs(n - 2);
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%d", climbingStairs(n));

    return 0;
}