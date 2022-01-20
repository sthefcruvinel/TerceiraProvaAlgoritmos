/*
Após obter, via teclado, o valor do prêmio, os 20 números sorteados (digitados em ordem crescente) e a quantidade de cartões (máximo de 100 cartões),
serão introduzidos os dados de cada cartão.
Para cada cartão, serão lidos os números apostados (valores do tipo inteiro) digitados em ordem crescente.
Importante: em um único cartão são apostados, exatamente, 20 números.
Para cada cartão vencedor, deve ser impresso o seu código identificador (o número a que corresponde na entrada de dados,
sequencialmente numerados, o 1º. Cartão informado é o cartão 0).
Ao final do programa, deve ser impresso o valor rateado do prêmio ou uma mensagem informando que o prêmio acumulou, caso não haja vencedores.

O seu programa deve, OBRIGATORIAMENTE, usar uma matriz para armazenar os números marcados em cada cartão e um vetor para os números sorteados.

a)    Faça uma função para preencher os números sorteados
b)    Faça uma função para preencher a matriz de apostas
c)    Faça uma função para verificar e mostrar quais apostas acertaram os números sorteados
d)    Faça uma função para mostrar o valor do prêmio para cada aposta vencedora
e)    Faça um programa principal faça as chamadas das funções na ordem necessária para exibir uma execução como a seguir (não é necessário criar um menu):
      (assumindo apenas 4 números, ao invés dos 20 pedidos no enunciado):

Defina os parâmetros e retornos das funções de acordo com a sua lógica. Não é permitido o uso de variáveis globais.
*/

#include <stdio.h>
#include <stdlib.h>

int preencheSorteados (int numeros_sorteados[4])
{
    int i;

    for (i=0; i<4; i++)
    {
        printf ("Entre com o %io número sorteado: ", i+1);
        scanf ("%i", &numeros_sorteados[i]);
    }
        return numeros_sorteados;
}

int preencheMatrizApostas (int cartoes, int apostas[cartoes][4])
{
    int i; int j;
       for(i = 0; i < cartoes; i++)
        {
            for(j = 0; j < 4; j++)
            {
                printf("Entre com o %io numero apostado no cartao com identificador %i: ", j+1, i+1);
                scanf(" %i", &apostas[i][j]);
            }
        }
        return apostas;
}

int verificaGanhadores (int cartoes, int ganhadores, int apostas[cartoes][4], int numeros_sorteados[4])
{
    int i; int j;
        for (i=0; i < cartoes; i++)
        {
             for(j = 0; j < 4; j++)
            {
                if (apostas[i][j] == numeros_sorteados[i])
                {
                    printf ("\nOs cartões ganhadores são: %i ", j+1);
                    ganhadores++;
                }
            }
        }
    return ganhadores;
}

float calculaPremio (float premio, int ganhadores)
{
    premio = premio / ganhadores;
    return premio;
}

int main()
{
    float premio = 0; int cartoes = 0; int ganhadores = 0; int numeros_sorteados[4]; int apostas[2][4]; float premioRateado = 0; int CartoesGanhadores = 0; int i;

    printf ("-------------------------------------------------------------------\n");
    printf ("\t\t\t CONCURSO MEGASORTE\n");
    printf ("-------------------------------------------------------------------");
    printf("\nEntre com o valor do prêmio: ");
    scanf ("%f", &premio);

    preencheSorteados (numeros_sorteados);

    do
    {
        printf ("Entre com a quantidade de cartões: ");
        scanf ("%i", &cartoes);
    if (cartoes > 100)
        printf ("Entrada inválida! Máximo de 100 cartões.\n");
    } while (cartoes > 100);

    preencheMatrizApostas (cartoes, apostas);
    verificaGanhadores (cartoes, ganhadores, apostas, numeros_sorteados);
    ganhadores = calculaPremio (premio, ganhadores);
    premioRateado = calculaPremio (premio, ganhadores);
    printf ("\n-------------------------------------------------------------------");
    printf ("\nO valor do prêmio rateado entre os ganhadores é: %f", premioRateado);

    return 0;
}

