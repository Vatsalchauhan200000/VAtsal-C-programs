#include<stdio.h>

main(){
    //Write a program to check whether a year is a leap year or not

    printf("Enter A Year");
    int year;
    scanf("%d",&year);

    if(year&4==0){
        printf("%d is a leap year",year);

    }else{
        printf("%d is not a leap year",year);
    }
}