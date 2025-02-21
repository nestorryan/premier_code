#include<stdio.h>

int main()
{
    int n=1,k=2, x=11, i=0,j;
    for(i=9; i>0;i--) {
        x=n*9+k;
        for(int j=0; j<i; j++)
            printf(" ");
        printf(" %d.9 + %d = %d\n",n,k,x);
        n=x+n;
        k++;
        printf("\n");
    }
    printf("\n\n");
    return 0;
}