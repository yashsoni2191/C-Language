
#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)
    {

        for (int y = row - 1; y >= 1; y--)
        {
            printf(" ");
        }

        for (int col = 5; col >= row; col--)
        {

            printf("%d", col);
        }

        printf("\n");
    }
}

// 54321
//  5432
//   543
//    54
//     5