#include <stdio.h>

#include <string.h>

int main()
{
    char num1[1000],num2[1000],result[2001];
    scanf("%s %s",num1,num2);

    int i = strlen(num1) - 1;
    int j = strlen(num2) -1 ;
    int k=0 , carry =0;

    while (i>=0||j>=0||carry>0)
    {
        int d1 = (i>=0)? num1[i]-'0':0;
        int d2 = (j>=0)? num2[j]-'0':0;
        int sum = d1+d2+carry;

        result[k++] =(sum%10)+'0';
        carry = sum/10;
        i--;
        j--;
    }
    result[k]='\0';

    for (int p=k-1;p>=0;p--)
    {
        printf("%c",result[p]);
    }

    return 0;
}