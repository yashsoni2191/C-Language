#include<stdio.h>
int main(){
    for (int row = 1; row <= 5; row++)  
    {
        for (int col = 5; col >= row; col--)
        {
            printf("%d", row);
        }
        printf("\n");
        
    }
    
}

// 11111
// 2222
// 333
// 44
// 5