#include<stdio.h>

int main(){
    for (int row=1;row<=5; row++){
        for (int col=row; col<=5;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
        
    }
}

// 1 2 3 4 5 
// 2 3 4 5 
// 3 4 5 
// 4 5 
// 5 