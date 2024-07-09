
#include <stdio.h>
int main()
{

    for (int row = 5; row >= 1; row--)
    {

        for (int y = 5 - row; y >= 1; y--)
        {
            printf(" ");
        }

        for (int col = row; col >= 1; col--)
        {

            printf("%d", col);
        }

        printf("\n");
    }
}

// 54321
//  4321
//   321
//    21
//     1