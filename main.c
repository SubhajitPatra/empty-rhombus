#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,mid;
    mid=4;
    for(i=0;i<=8;i++){
        for(j=0;j<=8;j++){
        if(abs(mid-i)==j){
            printf("*");
        }
        else if (abs(mid-i)==8-j){
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
