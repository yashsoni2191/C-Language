
#include <stdio.h>
int main()
{

    for (int row = 5; row >= 1; row--)
    {

        for (int y = row - 1; y >= 1; y--)
        {
            printf(" ");
        }

        for (int col = row; col <= 5; col++)
        {

            printf("%d", col);
        }

        printf("\n");
    }
}

//     5
//    45
//   345
//  2345
// 12345