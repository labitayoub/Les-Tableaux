#include<stdio.h>

int main()
{
    int n,i;
    float T[100];
    float element;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&n);
    printf("Entre les element du teblau : \n");
    for(i=0;i<n;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&T[i]);

    }

    printf("\n");
    printf("Entrer element a rechercher : ");
    scanf("%f",&element);
    int x=0;
    for(i=0;i<n;i++){

        if(element==T[i]){
            printf("Element %.2f est present \n",T[i]);
            x=1;

        }
    }
    if(x==0){
        printf("%.2f les element non present \n",element);

    }

    return 0;

}
