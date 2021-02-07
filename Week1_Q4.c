#include<stdio.h>
int main(){
    int Physics, Chemestry, Biology, Mathematics, Computer, Total, perc;
    float percent;
    printf("Enter marks for Physics, Chemestry, Biology, Mathematics, Computer.\n");
    scanf("\n %d \n %d \n %d \n %d \n %d", &Physics, &Chemestry, &Biology, &Mathematics, &Computer);
    Total=(Physics+Chemestry+Biology+Mathematics+Computer);
    percent=(float)Total/5;
    printf("Percentage= %f. \n",percent);

   
    if(percent>=90)
        printf("Grade-A!");
    else if(percent>=80)
        printf("Grade-B!");
    else if(percent>=70)
        printf("Grade-C!");
    else if(percent>=60)
        printf("Grade-D!");
    else if(percent>=40)
        printf("Grade-E!");
    else
        printf("FAiL!");
    
    return 0;
    

}