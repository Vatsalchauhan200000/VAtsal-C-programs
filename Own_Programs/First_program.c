#include<stdio.h>

myprogram(){

    printf("This Is My Program\n");
}

my2program(int a){

    printf("Value Of Int a is %d\n",a);
    
    
}

Subtraction(int a, int b){

    printf("Difference of %d and %d => %d\n",a,b,a-b);


}
my3program(int a, int b){

    int g = 0;
    int h = 0;

    while(a!=0){
        a = a/10;
        g++;
    }

    while(b!=0){
        b = b/10;
        h++;
    }

    if(g = h){
        printf("Both Numbers Have Same Digits\n");
    
    }else{
        printf("Both Numbers Have Different DIgits\n");
    }

}

int my4program(){

    return 32;
}

float Division(float a, float b){

    printf("hello ");
    return a/b;
}


main(){

    myprogram();
    my2program(34);
    Subtraction(67, 34);
    my3program(1234,4567);

    printf("This Is MY 4th Program\n", my4program());
    printf("Divsion is %f",Division(4.8, 2.4));
    


}