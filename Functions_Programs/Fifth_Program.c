#include<stdio.h>

// Write a C program to check whether a number is even or odd using functions.

void even(int a){
    if(a%2==0){
        printf("%d is Even\n",a);

    }else{
        printf("%d is not even\n",a);
    }

}

void odd(int b){
    if(b%3==0){
        printf("%d is odd\n",b);

    }else{
        printf("%d is not odd",b);
    }

}


int main(){
    even(24);
    odd(33);

}