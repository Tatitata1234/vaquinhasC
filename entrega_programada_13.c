#include <stdio.h>
#define N 2000

struct cabecaGado{
    int codigo;
    int leite;
    int alimento;
    int idade;

}registro[N];



int main(){

    int i=0, j=0, leiteMes=0, alimentoMes=0, k=0, leiteMesVacasVendidas=0, alimentoMesVacasVendidas=0;

    do{
        printf("Insira o codigo:\n");
        scanf("%d",&registro[i].codigo);
        if(registro[i].codigo==0){
            break;
        }
        printf("Insira os litros de leite produzidos por semana:\n");
        scanf("%d",&registro[i].leite);
        printf("Insira os quilos de alimento consumidos por semana:\n");
        scanf("%d",&registro[i].alimento);
        printf("Insira a idade:\n");
        scanf("%d",&registro[i].idade);
        i++;
    }while(i<N);

    for(j=0;j<i;j++){
        leiteMes = leiteMes + 4*registro[j].leite;
        alimentoMes = alimentoMes + 4*registro[j].alimento;
        if(registro[j].idade>=5){
            k++;
            leiteMesVacasVendidas = leiteMesVacasVendidas + 4 * registro[j].leite;
            alimentoMesVacasVendidas = alimentoMesVacasVendidas + 4 * registro[j].alimento;
        }
    }

    printf("A quantidade de leite produzido por mes e %d\n",leiteMes);
    printf("A quantidade de alimento produzido por mes e %d\n",alimentoMes);
    printf("Qual o numero de vacas que podem ser vendidas %d\n",k);
    printf("A quantidade de leite produzido por mes pelas vacas a serem vendidas e %d\n",leiteMesVacasVendidas);
    printf("A quantidade de alimento consumido por mes pelas vacas a serem vendidas e %d\n",alimentoMesVacasVendidas);
    printf("\n\n\n");

    return 0;
}

