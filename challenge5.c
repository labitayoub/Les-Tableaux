#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    float T[50];
    float min;
    printf("Entrer le nombre de Tablau : \n");
    scanf("%d",&n);
    printf("Entre les element du teblau : \n");
    for(i=0;i<n;i++){

        printf("Entrer Element[%d] =",i+1);
        scanf("%f",&T[i]);

    }
    min = T[0];
    for(i=1;i<n;i++)
        {
          if (T[i]<min)
          min = T[i];   
        }
    
    
    printf("Le minimum est : %.2f\n",min);

    return 0;

}