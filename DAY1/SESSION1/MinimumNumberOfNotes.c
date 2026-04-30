#include <stdio.h>

int main()
{
    int n;
    int arr[7] = {100, 50, 20, 10, 5, 2, 1};
    int number_of_notes;
    printf("Enter Money required for change: ");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++)
    {
        number_of_notes = n / arr[i];
        n = n % arr[i];
        printf("%d notes of $%d required \n", number_of_notes, arr[i]);
    }
    return 0;
}

/*
int main()
{
    int n;
    int arr[7] = {100, 50, 20, 10, 5, 2, 1};
    printf("Enter Money required for change: ");
    scanf("%d", &n);

    for (int i = 0; i < 7; i++)
    {
        if (n / arr[i] != 0)
        {
            int number_of_notes = n / arr[i];
            n = n % arr[i];
            printf("%d notes of %d required \n", number_of_notes, arr[i]);
        }
    }

    return 0;
}
*/