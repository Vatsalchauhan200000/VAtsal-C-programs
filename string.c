#include<stdio.h>
#include<string.h>

main(){

    char name1[] = "Vatsal";

    printf("%s\n",name1);

    printf("Enter String\n");
    char data[10];


    gets(data);

    printf("user enttered string is %s\n",data);
    puts(data);

    for(int i=0;i<10;i++){
        printf("%c ",data[i]);
    }
}











    
}