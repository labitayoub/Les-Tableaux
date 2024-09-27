#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    float T[50];
    float multiple;
    printf("Entrer le nombre de Tablau : \n");
    scanf("%d",&n);
    printf("Entre les elements du teblau : \n");

    for(i=0;i<n;i++)
    {
        printf("Entrer Element [%d] =",i+1);
        scanf("%f",&T[i]);
    }
    printf("Entrer le facteur de multiplication : ");
    scanf("%f",&multiple);
    printf("\n");
    printf("Resultant : \n");
    for(i=0;i<n;i++){

        printf("Element [%d] = %.2f\n",i+1,T[i]*multiple);
    }


    return 0;

}
