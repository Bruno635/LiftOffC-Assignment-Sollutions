//Star arrangement using array
#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<5;i++){
        printf("\n");
        for(j=0;j<5;j++){
            if(i==j || i+j==4)
            printf("*");
            else
            {
                printf(" ");
            }
            
            


        }
    }
    printf("\n");
    return 0;
}