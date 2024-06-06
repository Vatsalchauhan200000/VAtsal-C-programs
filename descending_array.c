#include<stdio.h>

main(){

     int arr[] = {12,35,56,7854,23,56,6734,456,8,5,12,7,9};

     printf("\nBefore Sorting:\n");

    for(int i=0;i<13;i++){
        printf("%d ",arr[i]);
    }

    for(int i=0;i<13;i++){ 

       for(int j=i+1;j<13;j++){ // 34 ..9

           if(arr[i]<arr[j]){
                int temp = arr[i]; // 12
                arr[i] = arr[j];
                arr[j] = temp;
           }
       }
    }   
    printf("\nDescending Order:\n");

    for(int i=0;i<13;i++){
        printf("%d ",arr[i]);
    }


     printf("\nSecond Largest Element is:\n");

    for(int i=1;i<13;i++){
        printf("%d ",arr[i]);
    }


}