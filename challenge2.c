#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    int T[50];
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&n);
    printf("Entre les elements du teblau : \n");

    for(i=0;i<n;i++)

    {
    printf("Entrer Element [%d] = ",i+1);
    scanf("%d",&T[i]);

    }
    
    printf("Les element du tablau est : \n");
    for(i=0;i<n;i++)

        printf("%d ",T[i]);


    return 0;

}