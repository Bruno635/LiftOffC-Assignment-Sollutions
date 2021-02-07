#include<stdio.h>
int main(){
int num1,num2,sum, sub, mult;
float div;
scanf("%d %d", &num1, &num2);
sum=num1+num2;
sub=num1-num2;
mult=num1*num2;
div=(float)num1/num2;
num1=(int)num1;
printf("The addition, substraction, multiplication and division of %d and %d are %d, %d, %d, %f respectively.", num1, num2, sum, sub, mult, div);
return 0;
}