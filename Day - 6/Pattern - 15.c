#include<stdio.h>
int main(){
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d", row);
        }
        printf("\n");
        
    }
    
}

// 1
// 22
// 333
// 4444
// 55555