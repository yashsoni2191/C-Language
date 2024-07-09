#include<stdio.h>
int main(){
    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    
}   

// 12345
// 1234
// 123
// 12
// 1