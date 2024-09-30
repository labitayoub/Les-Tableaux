#include<stdio.h>

int main()
{
    int m,i;
    float n[100],s=0;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);
        s+=n[i];

    }

    printf("\n");
    float moy=s/m;
    printf("Moyenne des elements est : %.2f",moy);



    return 0;

}
