#include<stdio.h>
#include<math.h>
#define pi 3.14

 typedef struct polyg
    {
        float arete;
        int nba;
    }polyg;

int main(){
    polyg r;
    float a,p;

    printf("entrer le nombre d'arete\n");
    scanf("%d",&r.nba);
     printf("entrer la longueur d'une arete\n");
    scanf("%f",&r.arete);

    p=r.nba*r.arete;
    a=(r.nba*r.arete*r.arete)/(4*tan(pi/r.nba));

    printf("le perimetre de ce polygon est %f",p);


    return 0;
    

}