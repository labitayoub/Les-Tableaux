#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    float T[50];
    float max;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&n);
    printf("Entre les element du teblau : \n");
    for(i=0;i<n;i++){

        printf("Entrer Element[%d] =",i+1);
        scanf("%f",&T[i]);

    }
    max = T[0];
    for(i=1;i<n;i++)
        {
          if (T[i]>max)
          max = T[i];   
        }
    
    
    printf("Le maximum est : %.2f\n",max);

    return 0;

}
