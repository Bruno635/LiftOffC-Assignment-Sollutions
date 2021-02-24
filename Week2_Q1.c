//SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
    int num, lastdig,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
    lastdig=num%10;
    sum=sum+lastdig;
    num=num/10;
    }

printf("Sum of digits: %d \n",sum);
return 0;


}