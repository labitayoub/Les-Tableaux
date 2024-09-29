#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nbr,i,j;
    float T[100];
    float Petit;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&nbr);
    printf("Entre les elements du Teblau : \n");
    for(i=0;i<nbr;i++){

        printf("Entrer L'element [%d] = ",i+1);
        scanf("%f",&T[i]);

    }
    Petit=T[0];
    int tmp;
    printf("\n");
    printf("les elements a ordre croissant est : \n");
    for(i=0;i<nbr;i++){

        for(j=i+1;j<nbr;j++){

            if(T[j]<T[i]){

                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;

            }
        }


    }

     for(i=0;i<nbr;i++){

        printf("%.2f\t",T[i]);
    }
 return 0;
}
