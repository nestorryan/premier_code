#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n,niveau;
    printf("Pour gagner vous devez reussir a deviner le nombre qui a ete generer par notre robot\nBonne chance! :-)\n\n");
   printf("Entrer votre niveau de 1 ou 2\n");
   scanf("%d",&niveau);

    if(niveau==1){
        
        srand(time(NULL));
        int nombre = (rand() % 10) + 1;

        do{
            printf("Entrer un nombre\n");
            scanf("%d",&n);
            if(n<nombre)
                printf("Plus Grand\n");
            else
                if(n>nombre)
                    printf("Plus Petit\n");
                
        }while(n!=nombre);
    }
    else
        if(niveau==2){
            srand(time(NULL));
        int nombre = (rand() % 30) + 1;

        do{
            printf("Entrer un nombre\n");
            scanf("%d",&n);
            if(n<nombre)
                printf("Plus Grand\n");
            else
                if(n>nombre)
                    printf("Plus Petit\n");
                
        }while(n!=nombre);
        }
    

    printf("BRAVO!\n");

    

    return 0;
}