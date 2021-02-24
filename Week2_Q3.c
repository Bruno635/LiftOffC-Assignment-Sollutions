#include<stdio.h>
#include<string.h>
 
int main(){
    char str[50];
    int i=0; 
    int nwords=0;
    printf("Input the string: ");
    fgets(str, 51, stdin);
    
    while(str[i]!='\0'){
        nwords+=1;
        i++;
    }
printf("Number of words: %d \n .",nwords);
return 0;
}
