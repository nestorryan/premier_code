#include<stdio.h>

int main(){

    int x,i,j;

    printf("Entrer votre nombre \n");
    scanf("%d",&x);
    j=1;
    for(j=1;j<=x;j++){
        for(i=1;i<=10;i++){

            printf("%d * %d = %d \n",j,i,j*i);
            
        }
        printf("/-------------------/ \n");
        printf("/-------------------/ \n");
       
    }
    
     return 0;
}