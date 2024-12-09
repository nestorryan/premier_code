#include<stdio.h>

int main(){
    int x,i,y;
    printf("entrer un nombre");
    scanf("%d",&x);
    y=x;
    for(i=1;i<x;i++){
        y=y*i;

    }
    printf("le resultat est %d \n ",y);

    return 0;
}