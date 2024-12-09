#include<stdio.h>

int main(){
    char s;
    int a,b,c;
   
    printf("Bienvenue dans l'univer du super calculateur\n");
     printf("Enter votre signe pour que nous puissions effectuer votre calcul:\n");
    scanf("%c",& s);
    printf("Entrer votre premier nombre\n");
    scanf("%d",&a);
    printf("Entrer votre deuxieme nombre\n");
    scanf("%d",&b);
    
    switch (s)
    {
        case '+':
            c=a+b;
            printf("le resultat est %d \n",c);
        break;

        case '-':
        c=a-b;
            printf("le resultat est %d \n",c);
        break;


   
    }

    
}