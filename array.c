#include<stdio.h>

main(){

    printf("Enter the Size\n");
    int a;
    scanf("%d",&a);

    int b[a];

    for(int h=0;h<a;h++){
        scanf("%d",&b[h]);


    printf("[%d] => %d",h,b);
    }



}
