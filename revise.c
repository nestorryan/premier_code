#include<stdio.h>

int main(){
    int n;
    do{
    printf("enntrer un nombre");
    scanf("%d",&n);
    // while(n<10||n>20){
    //     printf("entrer un nombre");
    //     scanf("%d",&n);
    // }
    }while(n<10 || n>20);

    return 0;
}