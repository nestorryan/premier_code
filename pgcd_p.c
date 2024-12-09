#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("entrer un nombre");
    scanf("%d",&a);
     printf("entrer un deuxieme nombre");
    scanf("%d",&a);
    c=0;

    while(c==0){
            if(a>b){
                c=a%b;
                a=c;
            }
            else if(b>a){
                c=b%a;

            }
             

        }
    if(b==0){
        printf("leurs PGCD est egale a %d",a);
    }
    else
     if(a==b){
        printf("leurs PGCD est egale a %d",b);
     }  
     else{
         while(b>a){

            c=b-a;
            d=a%c;
            a=c;
            b=d;
            
             

        }
     }         
     
}