#include<stdio.h>
int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", col);
        }
        printf("\n");
        
    }
    
}

// 1
// 12
// 123
// 1234
// 12345