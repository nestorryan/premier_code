#include<stdio.h>

int main(){
    int n,i;
    printf("SVP entrer un nombre:\n");
    scanf("%d",& n);
    i=0;
    while(n>0){
        n=n/10;
        i++;
    }
    printf("ce nombre est compose de %d:\n",i);
    return 0;

}