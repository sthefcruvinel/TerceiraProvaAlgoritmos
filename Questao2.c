/*
Ap�s obter, via teclado, o valor do pr�mio, os 20 n�meros sorteados (digitados em ordem crescente) e a quantidade de cart�es (m�ximo de 100 cart�es),
ser�o introduzidos os dados de cada cart�o.
Para cada cart�o, ser�o lidos os n�meros apostados (valores do tipo inteiro) digitados em ordem crescente.
Importante: em um �nico cart�o s�o apostados, exatamente, 20 n�meros.
Para cada cart�o vencedor, deve ser impresso o seu c�digo identificador (o n�mero a que corresponde na entrada de dados,
sequencialmente numerados, o 1�. Cart�o informado � o cart�o 0).
Ao final do programa, deve ser impresso o valor rateado do pr�mio ou uma mensagem informando que o pr�mio acumulou, caso n�o haja vencedores.

O seu programa deve, OBRIGATORIAMENTE, usar uma matriz para armazenar os n�meros marcados em cada cart�o e um vetor para os n�meros sorteados.

a)    Fa�a uma fun��o para preencher os n�meros sorteados
b)    Fa�a uma fun��o para preencher a matriz de apostas
c)    Fa�a uma fun��o para verificar e mostrar quais apostas acertaram os n�meros sorteados
d)    Fa�a uma fun��o para mostrar o valor do pr�mio para cada aposta vencedora
e)    Fa�a um programa principal fa�a as chamadas das fun��es na ordem necess�ria para exibir uma execu��o como a seguir (n�o � necess�rio criar um menu):
      (assumindo apenas 4 n�meros, ao inv�s dos 20 pedidos no enunciado):

Exemplo da execu��o do programa
Entre com o valor do premio: 1000
Entre com os numeros sorteados: 5 15 24 33
Entre com a quantidade de cartoes: 3
Entre com os numeros apostados no cartao com identificador 0: 5 15 24 33
Entre com os numeros apostados no cartao com identificador 1: 6 12 59 60
Entre com os numeros apostados no cartao com identificador 2: 5 15 24 33
Cartoes vencedores: 0, 2
Valor rateado do premio = 500.

Defina os par�metros e retornos das fun��es de acordo com a sua l�gica. N�o � permitido o uso de vari�veis globais.
*/

#include <stdio.h>
#include <stdlib.h>

int preencheSorteados (int numeros_sorteados[4])
{
    int i;

    for (i=0; i<4; i++)
    {
        printf ("Entre com o %io n�mero sorteado: ", i+1);
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
                    printf ("\nOs cart�es ganhadores s�o: %i ", j+1);
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
    printf("\nEntre com o valor do pr�mio: ");
    scanf ("%f", &premio);

    preencheSorteados (numeros_sorteados);

    do
    {
        printf ("Entre com a quantidade de cart�es: ");
        scanf ("%i", &cartoes);
    if (cartoes > 100)
        printf ("Entrada inv�lida! M�ximo de 100 cart�es.\n");
    } while (cartoes > 100);

    preencheMatrizApostas (cartoes, apostas);
    verificaGanhadores (cartoes, ganhadores, apostas, numeros_sorteados);
    ganhadores = calculaPremio (premio, ganhadores);
    premioRateado = calculaPremio (premio, ganhadores);
    printf ("\n-------------------------------------------------------------------");
    printf ("\nO valor do pr�mio rateado entre os ganhadores �: %f", premioRateado);

    return 0;
}

