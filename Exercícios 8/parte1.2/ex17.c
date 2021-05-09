/*
ex17 p250
Faça um programa que preencha e mostre a média dos 
elementos da diagonal principal de uma matriz 10 x 10.
*/

//Bibliotecas.
#include<stdio.h>
#include<math.h>

//Procedimento para ler inputs do usuário (matriz).
void lerMatriz(int n1, int n2, int m[n1] [n2])
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Digite o elemento da linha %d e coluna %d: ", i, j);
            scanf("%d", &m[i] [j]);
            printf("\n");
        }
    }
}

//Procedimento para fazer a média dos elementos da diagonal principal de uma matriz quadrada.
int mediaDiagonalP(int n1, int n2, int m [n1] [n2])
{
    int soma = 0, j = 0;
    for (int i = 0 ; i < n1; i++)
    {
        soma +=  m [i] [j];
        j++;
    }
    return soma / (j + 1);
}

int main(void)
{
    //Declaração de variáveis.
    int m [10] [10], mediaDiagonal;

    //Leitura dos índices da matriz.
    lerMatriz(10, 10, m);

    //Cálculo da média.
    mediaDiagonal = mediaDiagonalP(10, 10, m);

    //Output de dados.
    printf("Média dos elementos na diagonal principal = %d.\n", mediaDiagonal);

    return 0;
}