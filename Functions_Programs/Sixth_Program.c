#include<stdio.h>

// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.

prime(int a){

    for(int i=2;i<=a;i++){
        if (a%1==0){
            printf("%d is a prime number\n",a);
        }
    
    }


}


int main(){
    prime(7);
}