#include<stdio.h>

// Write a C program to find maximum and minimum between two numbers using functions.

void maximum(int a, int b){

    if(a<b){
        printf("%d Maximum Number\n",b);
 
    }
    else{
        printf("It Is Minimum Number");
    }
}

void minimum(int g, int h){

    if(g>=h){
        printf("It Is Maximum Number");
    }
    else{
        printf("%d Is Minimum Number",g);
    }
}

int main(){

    maximum(45, 78);
    minimum(45, 78);

    return 0;
}