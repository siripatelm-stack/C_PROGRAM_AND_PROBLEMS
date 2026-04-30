#include <stdio.h>
#include <string.h>

struct PhoneDirectorySearch
{
    long int phNumber;
    char name[20];
};
//storage classes
void sort(struct PhoneDirectorySearch s[],int n)
{
    struct PhoneDirectorySearch temp;
    for (int i =0;i<n-1;i++)
    {
        for (int  j= 0; j < n-i-1; j++)
        {
            if (strcmp(s[j].name,s[j+1].name)>0)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}
int  main()
{
    int n;
    scanf("%d",&n);
    struct PhoneDirectorySearch s[n];
    for (int i =0;i<n;i++)
        scanf("%s %ld",s[i].name,&s[i].phNumber);

    sort(s,n);
    char findname[20];
    printf("Enter a name to be found from directory :");
    scanf("%s",findname);

    int left =0;
    int right =n-1;
    int mid = left+(right-left)/2;

    while (left<right)
    {
        if (strcmp(findname,s[mid].name) == 0)
        {
            printf("%s %d FOUND",s[mid].name,s[mid].phNumber);
            break;
        }
        else if (findname[0]>s[mid].name[0])
        {
            left++;
        }
        else
        {
            right++;
        }
    }
    return 0;
}

/*
int binarysearch(phonedir s[],int n,char key[])
{
    int low =0;
    int hight = n-1 ;
    int mid = 0
    while(low<=right)
    {
        mid = (low+high)/2;
        int compare = strcmp(key,p[mid].name)
        if compare == 0
            printf
        else if compare>0
            low =mid+1
        else if compare <0
            high = mid-1;
        else 
            retrun -1
    }
}

int main()
{
    .....
    .....
    int q;
    printf("Enter queries");
    while (q--)
    {
        char search[200];
        scanf("%s",search);

        int index = binarysearch(struct,n,searchname);
        if (index!=-1)
        {printf("%s %s");
        }
        else 
        {
        printf("not found");
        }
    }
}
*/