#include<stdio.h>

void printarray(int* p, int size){

    for(int i=0;i<size;i++){
        printf("%d ",*p);
        p++;
    }
}



void main(){

    int arr[] = {1,5,2,7,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int* ptr =&arr[0];

    printarray(ptr,n);
}