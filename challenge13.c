#include<stdio.h>

int main()
{
    int m,i,x=0;
    int n[100];
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%d",&n[i]);

    }

    printf("\n");

    for(i=0;i<m;i++){

        if(n[i]%2!=0){
            printf("%d\t",n[i]);
            x=1;

        }
    }
    if(x==0){
        printf("tous les element no Inpairs \n");

    }


    return 0;

}
