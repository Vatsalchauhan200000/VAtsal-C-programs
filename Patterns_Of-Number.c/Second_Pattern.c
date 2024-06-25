#include<stdio.h>
/*11111
  00000
  11111
  00000
  11111
*/

void main(){

    for(int a = 0; a < 5;a++){
        for(int b = 0;b < 5;b++){
            if(a%2==0){
                printf("1");

            }else{
                printf("0");

            }
        }
        printf("\n");
    }
}