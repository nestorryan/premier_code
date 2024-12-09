#include<stdio.h>


int main(){
    int a,b,i,c;
    printf("entrer un nombre \n");
    scanf("%d",&a);
    printf("entrer l'exposant \n");
    scanf("%d",&b);
    c=a;
    for(i=1;i<b;i++){
        c=c*a;
    }
    printf("le resultat est %d \n",c);
    return 0;


}