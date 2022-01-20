#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    //Fun��o que calcula e mostra os valores brutos da ap�lice de cada uma das seguradoras;
void ValorBruto (float idade, float valorAutomovel, float i, float b)
{
    i = valorAutomovel * 0.04;
    b = valorAutomovel * 0.06;
    printf ("-------------------------------------------------------------------------------------------------");
    printf ("\nO valor bruto da ap�lice do seguro no Ita� � de: $%.2f reais.\nO valor bruto da ap�lice do seguro no Bradesco � de: $%.2f reais.", i, b);
}

    //Fun��o que aplica os descontos dados pela Bradesco Seguros (5% para clientes do sexo feminino e mais 10% de desconto
    //caso o cliente tenha 30 anos de idade ou mais;
float CalculaBradesco (int sexo, float idade, float valorAutomovel, float b)
{
    if (sexo == 1 && idade < 30)
    {
        b = valorAutomovel * 0.06;
        b = b * 0.95;
    }
        else if (sexo == 1 && idade >= 30)
        {
            b = valorAutomovel * 0.06;
            b = b * 0.95;
            b = b * 0.90;
        }
            else if (sexo == 2 && idade >= 30)
            {
                b = valorAutomovel * 0.06;
                b = b * 0.90;
            }
                else if (sexo == 2 && idade < 30)
                    b = valorAutomovel * 0.06;
   return b;
}

    // Fun��o que aplica os seguros dados pela Ita� Seguros (egurados com menos de 30 anos t�m um acr�scimo de 1% para cada ano
    //abaixo dos 30, chegando � 12% no caso do segurado ter 18 anos. J� os segurados com mais de 50 anos t�m desconto de 1% por ano,
    //limitando-se a 15% de desconto;
float CalculaItau (float idade, float valorAutomovel, float i)
{
    if (idade < 30)
    {
        i = valorAutomovel * 0.04;
        i = (1 + (30 - idade) / 100) * i;
    }
        else if (idade > 50 && idade <= 65)
        {
            i = valorAutomovel * 0.04;
            i = (1 - (50 - idade)/100) * i;
        }
            else if (idade > 65)
                i = valorAutomovel * 0.04;
                    else if (idade >= 30 && idade <= 50)
                        i = valorAutomovel * 0.04;
    return i;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int sexo = 0; float valorAutomovel = 0; float idade = 0; float i = 0; float b = 0; float OrcamentoBradesco = 0; float OrcamentoItau = 0;

    //La�o para controlar a entrada de dados e finalizar o programa caso um valor incorreto seja informado para a vari�vel sexo;
    do
    {
        printf ("-------------------------------------------------------------------------------------------------");
        printf ("\n\t\t\t C�LCULO DE AP�LICES DE SEGURO AUTOMOTIVO \t\t\t\t\t");
        printf ("\n-------------------------------------------------------------------------------------------------");
        printf ("\nEntre com o valor do ve�culo: ");
        scanf ("%f", &valorAutomovel);
        printf("Entre com a idade do cliente: ");
        scanf ("%f", &idade);
        printf ("Entre com o sexo do cliente [1-Feminino] ou [2-Masculino]: ");
        scanf ("%i", &sexo);
            //Verifica se um valor incorreto foi digitado e em caso positivo encerra o programa;
        if (sexo != 1 && sexo != 2)
        {
            printf ("\nPrograma finalizado!\n");
            return 0;
        }
            if (sexo == 1 || sexo == 2);
            {
                ValorBruto (idade, valorAutomovel, i, b);
                OrcamentoBradesco = CalculaBradesco (sexo, idade, valorAutomovel, b);
                OrcamentoItau = CalculaItau (idade, valorAutomovel, i);
                printf ("\n-------------------------------------------------------------------------------------------------");
                printf ("\nDe acordo com o perfil do cliente, o valor do seguro no Ita� Seguros � de $%.2f reais.", OrcamentoItau);
                printf ("\nDe acordo com o perfil do cliente, o valor do seguro no Bradesco Seguros � de $%.2f reais.", OrcamentoBradesco);
                printf ("\n-------------------------------------------------------------------------------------------------");

                    //Verifica o menor valor para retornar ao usu�rio qual seguro � mais indicado (menor pre�o);
                if (OrcamentoItau < OrcamentoBradesco)
                    printf ("\nA ap�lice de seguros mais indicada para este cliente � a do Ita� Seguros!\n\n");
                else if(OrcamentoItau > OrcamentoBradesco)
                printf ("\nA ap�lice de seguros mais indicada para este cliente � a do Bradesco Seguros!\n\n");
            }
    }
    while (sexo == 1 || sexo == 2);

    return 0;
}
