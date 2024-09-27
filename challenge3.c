#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    float T[50],s;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&n);
    printf("Entre les elements du teblau : \n");
    s=0;
    for(i=0;i<n;i++){

        printf("Entrer Element [%d] = ",i+1);
        scanf("%f",&T[i]);
        s= s+ T[i];
    }
    
    printf("La somme est : %.2f\n",s);

    return 0;

}