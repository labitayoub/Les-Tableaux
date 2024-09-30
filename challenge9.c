#include<stdio.h>

int main(){

    int T[5]={1,2,3,4,5};
    int T2[5];
    int i;
    int j;
    for(i=0; i <6;i++){

        T2[5-i]=T[i];
        
    }

    printf("Le Tableu Inversion est\n");
     for(int i=1;i<6;i++){

        printf("%d ",T2[i]);
    }


    return 0;

}
