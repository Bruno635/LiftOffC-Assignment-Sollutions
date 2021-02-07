#include<stdio.h>
#include<math.h>
#define pie 3.141
int main()
{
    float radius,diam, circkmfrnc,area;
    scanf("%f",&radius);
    diam=radius*2;
    circkmfrnc=2*pie*radius;
    area=pie*pow(radius,2);
    printf("Diameter, Circumference and area of the circle are %f, %f, %f respectively.",diam, circkmfrnc, area);
    return 0;
}