#include <stdio.h>

int main()
{

    for (int row = 0; row < 5; row++)
    {

        for (int col = 1; col <= 5 - row; col++)
        {
            printf("%d", col);
        }

        for (int col = 0; col < 2 * row; col++)
        {
            printf(" ");
        }

        for (int col = 5 - row; col >= 1; col--)
        {
            printf("%d", col);
        }

        printf("\n");
    }
}

// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1