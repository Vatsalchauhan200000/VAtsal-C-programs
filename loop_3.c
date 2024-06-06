#include<stdio.h>

main(){

    //Write a program to print all alphabets from a to z. - using while loop

      printf("Enter The Alphabet\n");
      char a;
      scanf("%c",&a);

      while(a>='a' && a<='z'){
        printf("%c ",a);
        a++;
      }




}