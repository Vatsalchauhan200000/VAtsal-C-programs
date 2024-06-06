#include<stdio.h>

main(){

     printf("Enter Character\n"); 
    char ch;
    scanf("%c",&ch);

    if((ch<='z' && ch>='a') || (ch<='Z' && ch>='A')){
        printf("\n%c is alphabet\n",ch);
        
    }else if(ch<='9' && ch>='0'){

        printf("\n%c is number\n",ch);

    }else{
        printf("\n%c is symbol\n",ch);
    }
}