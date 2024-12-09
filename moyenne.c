  #include<stdio.h>
  #include<math.h>


int main(){
     int i,j;
     float moy,som;
    int tab[5];

     som=0;
    for(i=0;i<5;i++){
        printf("entrer les differentes valeurs du tableau \n");
        scanf("%d",& tab[i]);
        som=tab[i]+som;  
    }
   
    moy=som/5;
    printf("%f",moy);
   return 0; 
 


}