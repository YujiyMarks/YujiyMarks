#include <stdio.h>
#include <math.h>

int main() {
    int num_joao;
    int num_teresa;

    double pontos_joao = 0;
    double pontos_teresa = 0;

    double coordx_joao;
    double coordy_joao;

    double coordx_teresa;
    double coordy_teresa;

    int cesta = 1;


    //printf("Digite o numero de cestas que Joao fez: \n");
    scanf("%d",&num_joao);

    for (int i = 1; i <= num_joao; i++) {
        //printf("Digite as coordenadas x e y da %d cesta de Joao: \n",cesta);
        scanf("%lf %lf",&coordx_joao,&coordy_joao);

        pontos_joao = pontos_joao + (int) (sqrt(pow(coordx_joao,2) + (pow(coordy_joao-500,2))));

        cesta++;
    }  



    //printf("Digite o numero de cestas que Teresa fez: \n");
    scanf("%d",&num_teresa);

    cesta = 1;

    for (int i = 1; i <= num_teresa; i++) {
        //printf("Digite as coordenadas x e y da %d cesta de Teresa: \n",cesta);
        scanf("%lf %lf",&coordx_teresa,&coordy_teresa);

        pontos_teresa += (int) (sqrt(pow(coordx_teresa,2) + (pow(coordy_teresa-500,2))));

        cesta++;
    }  

    if (pontos_joao >= 0 && pontos_teresa >= 0) {

        if ((int) pontos_teresa == (int) pontos_joao) {
            printf("Joao fez %d pontos, Teresa fez %d pontos.\nNinguem venceu.\n", (int) pontos_joao, (int) pontos_teresa);
        }
        else {
            if (pontos_joao > pontos_teresa) {
                printf("Joao fez %d pontos, Teresa fez %d pontos.\nJoao venceu.\n", (int) pontos_joao, (int) pontos_teresa); 
            }
            else {
                printf("Joao fez %d pontos, Teresa fez %d pontos.\nTeresa venceu.\n", (int) pontos_joao, (int) pontos_teresa);
    } }}
}