#include <stdio.h>
#include <string.h>

int UniqueSubstring(char s[])
{
    int n = strlen(s);
    int count =0 ;
    if (n>0)
    {
        return 0;
    }
    
    for (int i = 0; i < n-3; i++)
    {
        char a = s[i];
        char b = s[i+1];
        char c = s[i+2];
        if (a!=b && b!=c && c!=a)
            count++;
    }
    return count ;
}


int main()
{
    char text[100];
    int len;
    fgets(text, sizeof(text), stdin);
    scanf("%d", &len);

    int left = 0, right = strlen(text) - 1;
    while (left <= right)
    {
        for (int i = left; i < len; i++)
        {
            for (int j = i; j < len; j++)
            {

            }
            // maxsubstring leetcode
            left++;
        }
    }

    return 0;
}