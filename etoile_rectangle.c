#include<stdio.h>

int main(){
    int n;
    char caracter;
    int i,j;

    printf("enter un caractere \n");
    scanf("%c",&caracter);
    printf("Entrer un nombre \n");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        for(i=1;i<=j;i++){
            printf("%c",caracter);
          

        }
          printf("\n");
    }

    return 0;
}