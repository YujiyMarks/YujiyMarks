#include <stdio.h>

/*int somar(vetor,num1,num2) {
    return 0;
}*/


/*int atualizar(int vetor[],int num1,int num2) {
    vetor[num1] = num2;
}*/


int main() {
    int tamanho,num1,num2,total;
    char tipo;

    scanf("%d",&tamanho);

    int vetor[tamanho];
    //int * apontador = &[vetor];
    
    for (int i = 0; i < tamanho; i++) {
            scanf("%d ",&vetor[i]);
    }

    /*for (int i = 0; i < tamanho; i++)
    {
        printf("%d",vetor[i]);
    }*/

    int controle = scanf("%c ",&tipo);

    while (controle == 1) {

        scanf("%d %d",&num1,&num2);

        for (int i = 0; i < tamanho; i++) {
            printf("%d",vetor[i]);
        }  

        if (tipo == 's') {
            /*total = somar(vetor,num1,num2);
            printf("%d",total);*/
        } else {
            vetor[1] = 35;
            //atualizar(vetor,num1,num2);
        }

        controle = scanf("%c ",&tipo);
    } 

}