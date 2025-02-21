#include<stdio.h>

int main(){
    int n,i,j,c;

    printf("Entrer le nombre d'element que va contenir notre tableau\n");
    scanf("%d",&n);
    int tab[n];

    for(i=0;i<n;i++){
        printf("Entrer les valeurs du tableau\n");
        scanf("%d",&tab[i]);
    }
    for(j=0;j<n-1;j++){
        i=j+1;
        while(i<n){
            if(tab[j]>tab[i]){
                c=tab[i];
                tab[i]=tab[j];
                tab[j]=c;
            }
            i++;
        }
    }
    printf("ce tableau tries dans l'ordre croissant donne:\n");
    for(j=0;j<n;j++){
        printf("%d "  , tab[j]);
    }
    printf("\n");

    printf("ce tableau tries dans l'ordre decroissant donne:\n");
    
    for(j=n-1;j>=0;j--){
        printf("%d " , tab[j]);
        
    }

    return 0;
}