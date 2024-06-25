#include<stdio.h>

void main(){

    FILE *ptr;

    ptr = fopen("/Vatsal.c/C_file.txt", "r");

    if (ptr == NULL)
    {
        printf("No file Found");
    }
    else
    {

        printf("file Found\n");

        int n1;
        int n2;

        fscanf(ptr, "%d", &n1);
        fscanf(ptr, "%d", &n2);

        printf("File Read Successfully : %d   %d \n",n1,n2);

        fclose(ptr);
    }
}