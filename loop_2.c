#include<stdio.h>

main(){

    //write a program to print all natural numbers in reverse (from n to 1). - using while loop

    printf("Enter The Number\n");
    int a;
    scanf("%d",&a);

    int n = a;

    while(n>1){
        printf("%d ",n);
        n--;
    }


}