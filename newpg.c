#include<stdio.h>

main(){

    int arr [] = {1,99,63,24,11,35,65,32,21,24,0,42,55};

    for(int i = 0;i<13;i++){
        for(int j = i+1;j<13;j++){

            if(arr[i]<arr[j]){
                arr[i]=j;
                break;

            }
        }
    
    }
        for(int i = 0;i<13;i++){
            printf("%d ",arr[i]);
        }
    
 }
