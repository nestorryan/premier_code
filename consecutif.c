#include<stdio.h>

int main(){
    int i;
    int j;
    int tab[10];
    for(i=0;i<10;i++){
        printf ("entrer un nombre\n");
        scanf("%d",& tab[i]);
    }
    for(i=0;i<10;i++){
        j=tab[i+1]-tab[i];
    }
        if(j==1)
            printf("les nombres entrer sont des nombres consecutifs\n");
        else
            printf("ces nombres ne sont pas consecutifs\n");

    
    return 0;
}

