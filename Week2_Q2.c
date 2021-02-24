#include<stdio.h>
int main(){
    int nums[50];
    int i, n, reqsum=0;
    printf("Enter number of numbers: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++){
        if(nums[i]%2==0 || i%2==0){
            reqsum+=nums[i];
        }

    }
    printf("Sum of all even numbers and even positioned number is: %d.\n",reqsum);
    return 0;

}