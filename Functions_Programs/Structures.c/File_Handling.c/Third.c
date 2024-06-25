#include<stdio.h>

void main(){


    FILE *ptr;

    ptr = fopen("/home/arpit-parekh/c_files/student_data.txt", "r");
    if (ptr == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf("File Found\n");

        char str[1000];
        while(fgets(str, sizeof(str), ptr) != NULL){
            printf("%s", str);
        }
    }
}