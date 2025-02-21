#include<stdio.h>

int main(){
    
    int a,n,i,max;

    printf("Entrer un entier qui va determiner le nombre d'entier que vous allez entrer\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("Entrer un entier\n");
         scanf("%d",&a);
         if(a>max){
            max=a;
         }
    }
    printf("le plus grand des nombres que vous avez entrer est %d\n",max);
    return 0;
}