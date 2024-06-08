#include<stdio.h>

//Write a C program to find maximum and minimum elements in an array

main(){

    int arr[] = {1,23,45,65,41};
    int max = arr[3];
    int min = arr[0];

    for(int i=0;i<5;i++){
        if(arr[i] > max){
        arr[i] = max;
        }

    }

    printf("Maximum Element is: ");
     for(int i=0;i<5;i++){
        printf("%d ",max);
        break;
    }

      for(int i=0;i<5;i++){
        if(arr[i] < min){
        arr[i] < min;
        }


    }
    printf("Minimum Element is: ");
     for(int i=0;i<5;i++){
        printf("%d ",min);
        break;
   
    }      




}