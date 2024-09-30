#include<stdio.h>

int main()
{
    int m,i;
    float n[100],n2[100];
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }

    printf("\n");
    printf("le tablau original est: \n");
    for(i=0;i<m;i++){
         printf("N[%d] = %.2f\n",i+1,n[i]);

            }
    printf("Le copy de tablau est : \n");

     for(i=0;i<m;i++){
        n2[i]=n[i];
         printf("N2[%d] = %.2f\n",i+1,n2[i]);

    }
 return 0;
}
