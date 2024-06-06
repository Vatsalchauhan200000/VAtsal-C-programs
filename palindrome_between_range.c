#include<stdio.h>

main(){

    for(int i = 1;i<=10000;i++){
        
    int old = i;
    
    int rev = 0;

    while(i!=0){
        int last =i % 10;
        rev = rev*10 + last;
        i = i/10;
    }

    if(rev==old){
        printf("%d\n",old);

    }
    
    i=old;

}

}