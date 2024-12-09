#include<stdio.h>

int main(){
    float nombre,s;
    int i;
    printf("entrer le valeur de votre nombre\n");
    scanf("%f",& nombre);
    s=0;
    for(i=1;i<=nombre;i++){
        s=s+i;
    }
    printf("l'addition des nombres inferieur ou egaux a ce nombres donne %f \n",s);
    return 0;
}