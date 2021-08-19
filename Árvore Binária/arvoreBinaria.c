#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct no
{
    int a;
    struct no *esquerda;
    struct no *direita;
};

void gera(struct no **, int);
void BuscaAvancada(struct no *);
void excluir(struct no **);

int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    struct no *inicio = NULL;
    int opcao = 0, num, flag = 0, chave;
    do
        {
            printf("\nDigite a opção:\n1. Insira\n2. Realizar busca\n3. SAIR\n\nopção: ");
            scanf("%d", &opcao);
            switch(opcao)
            {
                case 1: 
                    printf("Digite os elementos da árvore: ");
                    scanf("%d", &num);
                    gera(&inicio, num);
                    break;

                case 2: 
                    BuscaAvancada(inicio);
                    break;

                case 3: 
                    excluir(&inicio);
                    printf("Memória limpa\n\nPROGRAMA FINALIZADO\n");
                    break;

                default: 
                    printf("Entrada inválida, tente novamente\n");
            }

        } while (opcao != 3);
}