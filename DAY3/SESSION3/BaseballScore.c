/*
[5,10,c,d,+]
[5,10]
[5,10,15]

[5 -2 4 C D 9 + +]
[5 -2 ]
[5 -2 -4 9]
[5 -2 -4 9 5 14]
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    char ops[n][10];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", ops[i]);
    }
    int top = -1;
    int stack[n];

    for (int i = 0; i < n; i++)
    {
        if (strcmp(ops[i], '+') == 0)
        {
            int value = stack[top] + stack[top - 1];
            stack[top++] = value;
        }
        else if (strcmp(ops[i], "D") == 0)
        {
            stack[++top] = 2 * stack[top];
        }
        else if (strcmp(ops[i], "C") == 0)
        {
            top--;
        }
        else
        {
            stack[++top] = atoi(ops[i]);
        }
    }

    return 0;
}