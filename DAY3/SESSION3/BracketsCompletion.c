#include <stdio.h>
#include <string.h>

int main()
{
    char valid[100];
    fgets(valid, sizeof(valid), stdin);

    int top = -1;
    int len = strlen(valid);
    int stack[len];
    for (int i = 0; valid[i] != '\0'; i++)
    {
        if (valid[i] == '{' || valid[i] == '(' || valid[i] == '[')
        {
            stack[++top] = valid[i];
        }
        else
        {
            if (top == -1)
            {
                printf("false");
                return 0;
            }
        
        }
        if ((valid[i] == '}' && valid[i] == '{') || (valid[i] == ')' && valid[i] == '(') || (valid[i] == ']' && valid[i] == '['))
        {
            top--;
        }
    }
    if (top == -1)
        printf("VALID");
    else
        printf("NOT VALID");
    return 0;
}