#include<stdio.h>

void main(){


    FILE *ptr; 

    ptr = fopen("/home/arpit-parekh/c_files/my_file.txt", "w");

    if(ptr==NULL){
        printf("No file Found");
    }else{
        
        printf("file Found");

        printf("Enter first Values : ");
        int n1;
        scanf("%d", &n1);

        printf("Enter seocnd Values : ");
        int n2;
        scanf("%d", &n2);

        fprintf(ptr, "%d", n1);
        fprintf(ptr, "\n%d", n2);


        printf("File Write Successfully");

        fclose(ptr);
    }
}