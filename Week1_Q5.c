#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: \n");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Wow! It's a vowel.");
        break;
        default :
        printf("Ahh! It's a consonant.");

    }
    return 0;
}
