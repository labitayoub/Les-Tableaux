#include<stdio.h>

int main()
{
    int m,i,x=0;
    float n[100],elem,remp;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }

    printf("\n");
    printf("Entrer les element a rechercher : ");
    scanf("%f",&elem);
    for(i=0;i<m;i++){

        if(elem==n[i]){
            printf("Entrer la valeur remplacer : ");
            scanf("%f",&remp);
            n[i]=remp;
            x=1;

        }
    }
    if(x==0){
        printf("%.2f les element non present \n",elem);

    }
    for(i=0;i<m;i++){

        printf("N[%d] = %.2f \n",i+1,n[i]);


    }


    return 0;

}
