#include<stdio.h>

main(){

    
    printf("Enter Alphabet\n");
    char ch;
    scanf("%c",&ch);

    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U'){

        printf("%c is a vowel",ch);

    }else{
        printf("%c is not a vowel",ch);

    }
    }