#include<stdio.h>

int main(){
    int a,i,j,c;

    printf("Entrer le nombre d'element du tableau\n");
    scanf("%d",&a);
    int tab[a];

    for(i=0;i<a;i++){
        printf("Entrer les valeurs\n");
        scanf("%d",&tab[i]);
    }
    for(j=0;j<a-1;j++){
        i=j+1;
        for(i=0;i<a;i++){
            if(tab[j]>tab[i]){
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
            
        }
    }
    printf("ce tableau tries dans l'ordre croissant donne:\n");
    for(j=0;j<a;j++){
        printf("%d "  , tab[j]);
    }
    printf("\n");

    printf("ce tableau tries dans l'ordre decroissant donne:\n");
    
    for(j=a-1;j>=0;j--){
        printf("%d " , tab[j]);
        
    }

    return 0;
}