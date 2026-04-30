#include <stdio.h>

int main()
{
    int NumberOfvotes;
    int N = 5; //Total Canditates
    int map[6] = {0}; // all the 6 is 0
    int valid = 1, invalid = 0, vote = 0;
    printf("Enter number of votes: ");
    scanf("%d", &NumberOfvotes);

    for (int i = 0; i < NumberOfvotes; i++)
    {
        scanf("%d", &vote);

        if (vote >= 1 && vote <= N)
        {
            map[vote]++;
            valid++;
        }
        else
        {
            invalid++;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("candidate %d has %d votes\n", i, map[i]);
    }
    if (valid == 0)
    {
        printf("No valid votes: \n");
    }
    else
    {
        int winner = 1;
        for (int i = 2; i <= 5; i++)
        {
            if (map[i] > map[winner])
            {
                winner = i;
            }
        }
        printf("\nWinner is candidate: %d\n", winner);
    }
    printf("No of valid voters: %d\n", valid);
    printf("No of invalid voters: %d\n", invalid);

    return 0;
}