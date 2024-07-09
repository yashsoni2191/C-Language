#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)
    {

        for (int y = row - 1; y >= 1; y--)
        {
            printf(" ");
        }

        for (int col = row; col <= 5; col++)
        {

            if (col % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }
}

// 10101
//  0101
//   101
//    01
//     1