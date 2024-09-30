#include<stdio.h>

int main()
{
    int m,i,m1,j=0;
    float n[100],n2[100];
    printf("Entrer le nombre de Tablau 1 : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
     printf("Entrer le nombre de Tablau 2 : ");
    scanf("%d",&m1);
    printf("Entre les element du teblau 2: \n");
    for(i=0;i<m1;i++){

        printf("Entrer N2[%d] = ",i+1);
        scanf("%f",&n2[i]);

    }
    printf("Tablau 1 : \n");
         for(i=0;i<m;i++){

        printf("%.2f\t",n[i]);


    }
    printf("\n");
    printf("Tablau 2 : \n");
     for(i=0;i<m1;i++){

        printf("%.2f\t",n2[i]);


    }
    printf("\nTablau fusionne : \n");
    int m3=m+m1;
    float n3[100];
    for(i=0;i<m3;i++){

        if(i<m){

        n3[i]=n[i];
        }
        else
        {
             n3[i]=n2[j];
             j++;
        }



    }
     for(i=0;i<m3;i++){

         printf("%.2f\t",n3[i]);


    }



        return 0;

}
