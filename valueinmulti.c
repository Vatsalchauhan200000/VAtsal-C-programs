#include<stdio.h>

main(){

    printf("Enter The Size\n");
    int m,n;
    scanf("%d%d",&m,&n);

    int arr[m][n];
    int arr2[m][n];
    int arr3[m][n];


    printf("Enter The Value In First Array\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] =>",i,j);
            scanf("%d",&arr[i][j]);
        }


        }

    printf("Enter The Value In Second Array\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("[%d][%d] =>",i,j);
            scanf("%d",&arr2[i][j]);

        }
    
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          arr3[i][j] = arr[i][j] - arr2[i][j]; 
        }
    }

    printf("Subtraction Of Matrix\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr3[i][j]);

        }

        printf("\n");
    }
    
    
}    

