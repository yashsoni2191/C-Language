#include<stdio.h>
int main(){
    for (int row = 5; row >= 1; row--)  
    {
        for (int col = 1; col <= 5 - row + 1; col++)
        {
            printf("%d", row);
        }
        printf("\n");
        
    }
    
}

//  5
//  44
//  333
//  2222
//  11111