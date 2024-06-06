#include<stdio.h>

main(){
   // Write a program to check whether a number is divisible by 5 and 11 or not.
   
   printf("Enter The Value\n");
   int a;
   scanf("%d",&a);

   if(a%5==0 && a%11==0){
    printf("%d is divisible by 5 and 11",a);


   }else{
      printf("%d is not divisble by 5 and 11",a);
   }
   

   }
