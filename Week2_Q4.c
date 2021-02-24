#include<stdio.h>
int main(){
    int arr[50],small,large,n,i;
    int j=0;
    printf("Enter number of numbers: ");
    scanf("%d ",&n);  
    //printf("Enter inputs: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=arr[0];
    small=arr[0];
    
    while(j<i){
        if (small>arr[j])
            small=arr[j];
        if (large<arr[j])
            large=arr[j];
        j++;
    }
    printf("Largest: %d \n Smallest: %d \n", large, small);
return 0;
}