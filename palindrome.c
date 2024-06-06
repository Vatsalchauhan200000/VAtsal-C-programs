#include<stdio.h>

main(){

    printf("Enter A Number\n");
    int n;
    scanf("%d",&n);
    int old = n;

    int rev = 0;

    while(n!=0){
        int last =n % 10;
        rev = rev*10 + last;
        n = n/10;
    }

    if(rev==old){
        printf("Number Is Palindrome\n");

    }else{
        printf("Number Is Not Palindrome\n");
    }
}