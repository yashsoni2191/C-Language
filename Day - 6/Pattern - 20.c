#include<stdio.h>
int main(){
    for (int row = 0; row < 5; row++)  
    {
        for (int col = 5; col > row; col--)
        {
            printf("%d", col);
        }
        printf("\n");
        
    }
    
}

// 54321
// 5432
// 543
// 54
// 5