#include<stdio.h>

main(){

    //Write a program to check whether a character is uppercase or lowercase alphabet    

    printf("Enter Alphabet\n");
    char e;
    scanf("%c",&e);

    if(e<='Z' && e>='A'){
        printf("%c is a Upper Case",e);

    }else{
        printf("%c is a lower case",e);
    }    

}