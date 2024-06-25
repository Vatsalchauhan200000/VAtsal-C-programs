#include<stdio.h>
#include<string.h>

struct Person{                     
    char name[20];  
    int age;       
    float salary;   

}p1,p2; 

void main(){


    strcpy(p1.name, "Meet");
    p1.age = 34;
    p1.salary = 78000.56;

    strcpy(p2.name, "Nisarg");
    p2.age = 21;
    p2.salary = 98600.45;

    printf("person 1 name is %s\n", p1.name);
    printf("person 1 age is %d\n", p1.age);
    printf("person 1 salary is %f\n", p1.salary);

    printf("person 2 name is %s\n", p2.name);
    printf("person 2 age is %d\n", p2.age);
    printf("person 2 salary is %f\n", p2.salary);
}