#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello and Welcome to my Box Of stars!\n");

    int num1,j , i;

    printf("Enter number of rows: \n");
    scanf("%d", &num1);


    for(i = 1; i <= num1; i++){


        for(j = 1; j <= num1; j++){
            if( i == 1 || j == 1 || i == num1 || j == num1 ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
