#include<stdio.h>

main(){
    
    for(int a=1;a<=5;a++){

        for(int s=1;s<=a;s++){
            

            if(a%2==0){
                printf("0");

            }else{
                printf("*");
            }
            

        }
        printf("\n");
    }
}