#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{setlocale(LC_ALL, "Portuguese");

    int l,c,linha,coluna,jogador,jogadas,ganhou,opcao;
    char jogo[3][3];
    char jogador_1,jogador_2,nome1[20], nome2[20];

    printf("OLÁ JOGADOR 1!  \n DIGITE O SEU NOME: \n");
    scanf("%c",&nome1);
    printf("SEJA MUITO BEM VINDO %c \n", nome1);

    printf("\nOLÁ JOGADOR 2!\n DIGITE O SEU NOME: \n");
    scanf("%c",&nome2);
    printf("SEJA MUITO BEM VINDO, %c ", nome2);

    for(l = 0;l<3;l++);{
        for(c = 0;c<3;c++);{
                jogo[l][c] = " ";
        }
    }
    for(l = 0;l<3;l++);{
        for(c = 0;c<3;c++);{
                printf("%c",jogo[l][c] );
        }
    }
    return 0;
}
