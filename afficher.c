#include<stdio.h>
  #include<math.h>


int main(){
    int i,n;
    float tab[4];
    for(i=0;i<4;i++){
        printf("entrer les valeurs qui seront mis dans le tableau \n");
        scanf("%f",& tab[i]);
       
    }
    for(i=0;i<4;i++){
        
        printf ("les valeurs que vous avez entrer dans le tableau sont %f \n ",tab[i]);
    }
    return 0;
}