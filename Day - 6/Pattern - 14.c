#include<stdio.h>
int main(){
    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d", row);
        }
        printf("\n");
        
    }
    
}

// 55555
// 4444
// 333
// 22
// 1
