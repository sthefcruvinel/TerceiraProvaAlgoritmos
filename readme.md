(Questão 1 - IFTM) Suponha que você foi contratado por um corretor de seguros para desenvolver um programa de computador que auxilie o corretor no cálculo de seguros de automóveis. Este corretor trabalha com duas companhias de seguro: Itaú Seguros e a Bradesco Seguros. O corretor irá fornecer o sexo (codificado como: 1 para feminino e 2 para masculino) e a idade (número real) do cliente, além do valor (número real) do automóvel a ser segurado. Sabe-se que o valor da apólice para as seguradoras Itaú Seguros e Bradesco Seguros são de 4% e 6% do valor automóvel, respectivamente.

A seguradora Itaú Seguros não faz distinção quanto ao sexo dos segurados. No entanto, segurados com menos de 30 anos têm um acréscimo de 1% para cada ano abaixo dos 30, chegando à 12% no caso do segurado ter 18 anos. Já os segurados com mais de 50 anos têm desconto de 1% por ano, limitando-se a 15% de desconto.

A Bradesco Seguros dá desconto de 5% para clientes do sexo feminino e mais 10% de desconto caso o cliente tenha 30 anos de idade ou mais.

Todos os acréscimos e descontos para ambas as seguradoras são com base no valor bruto da apólice. 

Após o cálculo das apólices líquidas, o programa deve apresentar ambos os valores, referentes ao Itaú Seguros e ao Bradesco Seguros.

Construa esse programa na linguagem C e, para obter um código com melhor manutenabilidade estruture-o em funções, como descrito a seguir:

a)    Função que calcula o valor bruto da apólice de seguro. Essa função recebe como parâmetros o valor do automóvel e uma identificação da seguradora ‘I’ para Itaú e ‘B’ para Bradesco e retorna o valor da apólice com base nos índices informados no texto.
b)    Função que calcula e retorna o valor líquido da apólice para o Itaú. Essa função recebe o valor bruto da apólice e a idade do cliente;
c)    Função que calcula e retorna o valor líquido da apólice para o Bradesco. Essa função o valor bruto da apólice, a idade do cliente e o sexo do cliente;
d)    Um programa principal que lê a idade e o sexo do cliente e valor do automóvel a ser segurado e mostra os valores dos seguros para as duas seguradoras, utilizando as funções dos itens anteriores, de acordo com a necessidade, para realizar os cálculos. O programa também indica, para cada cliente, qual é a melhor opção de seguradora, com base no menor valor de apólice líquida. O programa deve estar apto a processar vários clientes, encerrando a execução quando um código inválido para o sexo do cliente for digitado.

##

(Questão 2 - IFTM) A Caixa Econômica publicou os 20 números sorteados no concurso da MEGASORTE. Só ganha quem acertar todos os 20 números. Escreva um programa que ajude a encontrar os sortudos ganhadores do prêmio milionário. Após obter, via teclado, o valor do prêmio, os 20 números sorteados (digitados em ordem crescente) e a quantidade de cartões (máximo de 100 cartões), serão introduzidos os dados de cada cartão. Para cada cartão, serão lidos os números apostados (valores do tipo inteiro) digitados em ordem crescente. Importante: em um único cartão são apostados, exatamente, 20 números. Para cada cartão vencedor, deve ser impresso o seu código identificador (o número a que corresponde na entrada de dados, sequencialmente numerados, o 1º. Cartão informado é o cartão 0). Ao final do programa, deve ser impresso o valor rateado do prêmio ou uma mensagem informando que o prêmio acumulou, caso não haja vencedores.

O seu programa deve, OBRIGATORIAMENTE, usar uma matriz para armazenar os números marcados em cada cartão e um vetor para os números sorteados.

a)    Faça uma função para preencher os números sorteados
b)    Faça uma função para preencher a matriz de apostas
c)    Faça uma função para verificar e mostrar quais apostas acertaram os números sorteados
d)    Faça uma função para mostrar o valor do prêmio para cada aposta vencedora
e)    Faça um programa principal e as chamadas das funções na ordem necessária (não é necessário criar um menu e assumindo apenas 4 números, ao invés dos 20 pedidos no enunciado).