#include<stdio.h>

    int diagonale(int l,int c){
        int i,j,s,p,result;
        int tab[l][c];
        s=0;
         for(i=0;i<l;i++){
                for(j=0;j<c;j++){
                    printf("entrer les valeurs de la ligne %d et de la colonne %d\n",i+1,j+1);
                    scanf("%d",&tab[i][j]);
                }
            }
        for(i=0;i<l;i++){
            for(j=0;j<c;j++){
                if(i==j){
                    s=s+tab[i][j];
                }
            }
        }

          i=0;
            for(j=c-1;j>=0;j--){
                
                    p=p+tab[i][j];
                    i++;
            }

            if(p==s)
                result=1;
                else
                    result=0;

        return result;
    }

int main(){
    int l,c,r,k,j;
    printf("entrer le nombre de lignes\n ");
    scanf("%d",&l);
     printf("entrer le nombre de colonnes\n ");
    scanf("%d",&c);
    

    if(l!=c)
        printf("le nombre de ligne doit etre egale au nombre de colonnes dans une matrice carre\n");
    else{

           

        r=diagonale(l,c);
            if(r==1)
                printf("la somme des diagonales a l'endroit est egale a la somme des diagonales a l'envers\n");
              else
                printf("la somme des diagonales a l'endroit est differente de la somme des diagonales a l'envers\n");  
    }

    return 0;
}