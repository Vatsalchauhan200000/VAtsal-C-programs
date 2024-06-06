#include<stdio.h>

main(){
     
     int arr[] = {34,45,76,89,12,54,98};

     int max = arr[0];

     for(int i=0;i<7;i++){
        
        if(max > arr[i]){
            max = arr[i];
    }

    }
    
    printf("Smallest Element in array is %d",max);
}
