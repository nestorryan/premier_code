#include<stdio.h>

int main(){

   int n,k,x,i,j;

   n=1;k=2;
   
      for(j=0;j<9;j++){
       
      x=n*9+k;

         printf("  ");
         printf("%d.9+%d=%d\n",n,k,x);
       
         n=x+n;
         k++;
         printf("\n");
       

      }
     
      
   



   return 0;

    
}