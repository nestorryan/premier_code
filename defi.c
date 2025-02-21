#include<stdio.h>
#define n 100
int main(){
    int i,j,c,max;
    float m;
    

    
    printf("lors de la saisie des notes une valeurs qui n'est pas comprises entre 0 et 20 fera arreter la saise\n");
        int note[n];
        i=0;
    do{
        printf("entrer la note numero %d\n",i+1);
        scanf("%d",&note[i]);
        i++;
    }while(note[i-1]>=0 && note[i-1]<=20);
    if(i>1){
        printf("vous avez saisis %d notes\n\n",i);

        m=0;
        for(j=0;j<i;j++){
            m=m+note[j];
        }
        m=m/i;
        c=0;
        for(j=0;j<i;j++){
            if(note[j]>m){
                printf("%d est supperieur a la moyenne\n",note[j]);
                c++;
            }
            else if(note[j]<m)
                printf("%d est inferieur a la moyenne\n",note[j]);
            else
                printf(" %d est egale a la moyenne\n",note[j]);
        }
        printf("le nombre de notes supperieurs a la moyenne sont %d\n\n",c);
        max=note[0];
        for(j=1;j<i;j++){
            if(max<note[j]){
                max=note[j];
            }
        }
        printf("la plus grande note est %d\n",max);
    }else{
        printf("ERROR entrer des notes positives\n");
    }

}