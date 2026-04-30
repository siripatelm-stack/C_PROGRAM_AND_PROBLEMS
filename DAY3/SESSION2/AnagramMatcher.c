//siri -> iris           VALID ANAGRAMS 242
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char anagram1[100],anagram2[100];
    int freq1[26]={0},freq2[26]={0};
    
    fgets(anagram1,sizeof(anagram1),stdin);
    fgets(anagram2,sizeof(anagram2),stdin);

    if (strlen(anagram1) != strlen(anagram2))
    {
        printf("NOT ANAGRAMS");
        return 0;
    }

    for (int i =0;anagram1[i]!= '\0';i++)
    {
        char ch = tolower(anagram1[i]);
        if (ch>='a'&&ch<='z')
        {
            freq1[ch-'a']++;
        }
    }
    for (int i =0;anagram2[i]!= '\0';i++)
    {
        char ch = tolower(anagram2[i]);
        if (ch>='a'&&ch<='z')
        {
            freq2[ch-'a']++;
        }
    }
    for (int i=0;i<26;i++)
    {
        if(freq1[i] != freq2[i])
            printf("NOT ANAGRAM");
            break;
    }
    printf("ANAGRAM");

    return 0;
}