#include<stdio.h>

main(){
    for(int a=1;a<=5;a++){

        for(int b=5;b>=a;b--){
            printf(" ");
        }
        for(int c=1;c<=a;c++){
        if(a!=1 && a!=2 ){
            printf(" *");
        }else{
            printf("  ");
        }
        }  

        for(int b=5;b>=(a*2)-4;b--){
            printf(" ");
        }
        for(int c=1;c<=a;c++){
            if(a!=1 && a!=2 ){
            printf(" *");
        }else{
            printf("  ");
        }
        }  
        


    
    
    printf("\n");
    
 }
 
   for(int a=1;a<=9;a++){
        
       for(int b=0;b<=a;b++){
            printf(" ");
 }

       for(int b=9;b>=a;b--){
            
            if(a==4 && b==5){
                printf(" j");
           }
           else if(a==4 && b==6){
                printf(" u");
            
           }
           else if(a==4 && b==7){
                printf(" n");

           }
           else if(a==4 && b==8){
                printf(" A");
           }
           else{
                printf(" *");
            }
 }
            
 
        printf("\n");

 
}

}


