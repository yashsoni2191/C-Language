#include <stdio.h>

int main()
{

    for (int row = 5; row >= 1; row--)
    {

        for (int col = 1; col <= row; col++)
        {

            printf("%d", col);
        }

        for (int space = (5 - row) * 2; space >= 1; space--)
        {
            printf(" ");
        }

        for (int coll = row; coll >= 1; coll--)
        {
            printf("%d", coll);
        }

        printf("\n");
    }

    for (int row = 1; row <= 5; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            printf("%d", col);
        }

        for (int space = (5 - row) * 2; space >= 1; space--)
        {
            printf(" ");
        }

        for (int coll = row; coll >= 1; coll--)
        {
            printf("%d", coll);
        }

        printf("\n");
    }
}

// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321