#include <stdio.h>
int main()
{
    for (int row = 5; row >= 1; row--)
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
}

// 5
// 54
// 543
// 5432
// 54321