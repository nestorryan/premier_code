#include<stdio.h>

int main(){

    int n,i,j;
    char c;
    printf("Entrer un caractere\n");
    scanf("%c",&c);
    printf("Entrer un nombre\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if((i==1)||(i==n)){
            for(j=1;j<=n;j++){
                printf("%c",c);
                
            }
            printf("\n");
        }
        else{
            for(j=1;j<=n;j++){
                if((j==1)||(j==n)){
                    printf("%c",c);
                    
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}