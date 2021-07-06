                            /*Program to check vowel or consonants*/

#include <stdio.h>

void main(){
    char ch;
    printf("Enter the alphabet>>");
    scanf("%c",&ch);
    ch = tolower(ch);

    if (ch>='a' && ch<='z'){
        switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("The entered alphabet is a vowel.");break;
        default:printf("The entered alphabet is a consonant.");break;
    }
    }
    else
        printf("INVALID INPUT!!..");
}
