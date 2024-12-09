#include<stdio.h>

int main(){
    float n,max=0;
    int i=0;

    do
    {
        i++;
        printf("entrer un nombre\n");
        scanf("%f",& n);
        if(n>max){
            max=n;
        }
        
    } while (n!=0);
    printf("vous ave entrer %d et le max est %f \n",i,max);
    return 0;
    
}