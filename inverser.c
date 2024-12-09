#include<stdio.h>

int main(){
    int n,r;
    printf("SVP entrer un nombre\n");
    scanf("%d",& n);
    r=0;
        while(n>0){
            r=r*10;
            r=r+n%10;
            n=n/10;
        }
    printf("Votre chiffre renverser donne %d :\n",r);
    return 0;
}