#include<stdio.h>

main(){

    int n;
    printf("No of Rows");
    scanf("%d",&n);

    for(int i=1;i<=5;i++){
         

    for(int k=2;k<=n;k++){

        printf(" ");
    }


    for(int j=1;j<= (2*n-1)-(2*i);j++){

        if(i==1 || j==1 || j==(2*n-1)-(2*i)){
            printf("*");
    }   else{
            printf(" ");
    }
   





}
    printf("\n");

}



}