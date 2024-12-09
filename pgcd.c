#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d;
    printf("entrer un nombre");
    scanf("%d",&a);
     printf("entrer le nombre");
    scanf("%d",&b);
    if(a>b){
        c=a%b;
        while(b>c){
            d=b%c;
            b=c;
            c=d;
            if(d==0){printf("le pgcd est %d",b);
                printf("le pgcd est %d",b);
            }else
            if(d==1){
                printf("le pgcd est %d",d);
            }
        }
    }
    return 0;
}