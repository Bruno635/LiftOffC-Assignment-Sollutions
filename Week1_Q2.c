#include<stdio.h>
int main(){
    float temp_cel, temp_far;
    scanf("%f",&temp_cel);
    temp_far=temp_cel*1.8+32;
    printf("Farhenheit value of %f celcious is %f F.",temp_cel, temp_far);
    return 0;
}