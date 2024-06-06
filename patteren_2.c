#include<stdio.h>

main(){
    
    for(int a=1;a<=5;a++){

            for(int b=1;b<=5;b++){

        if(a==b|| a+b==6){
            printf("*");

        }else{
            printf(" ");
        }

   } 
            printf("\n");   
    


    }

}