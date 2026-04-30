#include <stdio.h>

void num(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }
}
void alphabet(int n)
{
    char letter = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    alphabet(n);
    num(n);
    return 0;

}