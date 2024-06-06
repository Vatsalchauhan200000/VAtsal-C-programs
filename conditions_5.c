#include<stdio.h>

main(){
    //Write a program to check whether a character is in the alphabet or not.

    printf("Enter Alphabet");
    char ap;
    scanf("%c",&ap);

    if((ap<='z' && ap>='a') || (ap<='Z' && ap>='A')){
        printf("\n%c is alphabet\n",ap);
    
    }else{
        printf("\n%c is not alphabet\n",ap);
}

}