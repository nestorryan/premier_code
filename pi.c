#include<stdio.h>

int puissance(int a,int b){
    int j, d=a;
    for(j=1;j<b;j++){
        d=d*a;
    }
}
int main(){

    int i,c,p=-1;
    float pi;
    c=puissance(p,i);
    i=0;
    while(i>=0){
        pi=c*(4/((2*i)+1));
        i++;
    }
    printf("%f",pi);

    return 0;
}