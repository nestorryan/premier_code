#include<stdio.h>

int main(){
    int n;
    char caracter;
    int i;

    printf("enter un caractere \n");
    scanf("%c",&caracter);
    printf("Entrer un nombre \n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%c \n",caracter);

    }


    return 0;
}