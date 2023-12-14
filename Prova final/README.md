<h1 align="center"> Lista de Exercícios: Estruturas de Controle - Aninhamento de seletores (SWITCH) </h1> 

Prova de Linguagem de Programação I - Fabio Okuyama 01/12/2023
Após o envio final, baixe o arquivo e verifique se são os arquivos corretos
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

Questão 1 (4,5pts): Fazer um programa que cria uma matriz 9 X 9 de INT e efetue as seguintes
operações:

a) Inserir automaticamente os valores indicados abaixo, na matriz (isto é, o usuário não vai
inserir os valores) e imprimir em tela, de maneira organizada. Obrigatório uso de laço;
1pt

b) Calcular e apresentar a SOMA DOS ELEMENTOS PARES da Matriz. Obrigatório usar
repetição. 1pt

c) Buscar na matriz qual o MAIOR VALOR DIVISÍVEL POR 7, apresentar o;(usar repetição)
1pt

d) Definir uma função que recebe uma matriz como parâmetro e o número da LINHA; a
função deve receber o índice da linha como parâmetro e calcular a SOMA da LINHA e
retornar o valor; Apresente a SOMA de cada uma das LINHAS; 1pt

e) Definir função que calcula a média de toda a matriz; a função deverá receber a matriz
como parâmetro. 0,5pt
13 26 39 52 65 78 91 104 117
130 143 156 169 182 195 208 221 234
247 260 273 286 299 312 325 338 351
364 377 390 403 416 429 442 455 468
481 494 507 520 533 546 559 572 585
598 611 624 637 650 663 676 689 702
715 728 741 754 767 780 793 806 819
832 845 858 871 884 897 910 923 936
949 962 975 988 1001 1014 1027 1040 1053

Dica item a: matriz[linha][coluna] = (linha*dimensão+coluna+1)*13;

Questão 2 (3.0 pt): Em um posto de gasolina, os funcionários devem registrar a venda dos
combustíveis através dos códigos:

Código Combustivel Preço/Litro
11 Gasolina Comum R$5,30
22 Gasolina Aditivada R$5,80
33 Etanol R$4,50
44 Diesel R$6,50

Após a leitura do código do combustível, deve ser lida a quantidade de combustível
abastecido, em litros. O sistema deve apresentar o valor da venda.
Ao ser digitado o código 77, deve ser apresentada a totalização das vendas de cada
combustível e encerrar o programa, conforme exemplo abaixo.
Ao digitar o código 77, não deve ser solicitada a quantidade em litros.

2.1 - Leitura correta e cálculo de cada venda, usando laço de repetição implementado
corretamente e condicionais (1pt)

2.2 - Totalização correta das vendas para cada combustível; (1pt)

2.3 - Uso de função para cálculo do valor da venda (função recebe o código e a quantidade
como parâmetro e devolve o valor em reais) (1pt)

Modelo para Totalização:
Foram vendidos 65.0 Litros de Gasolina Comum a R$344.50
Foram vendidos 80.0 Litros de Gasolina Aditivada a R$464.00
Foram vendidos 70.0 Litros de Etanol a R$315.50
Foram vendidos 130.0 Litros de Diesel a R$845.00
Total de Vendas: 345.0 Litros de combustivel a R$1969.00

Questão 3 - Escreva um programa que leia 5 valores float a,b,c,d,e (2,5pts)

a) criar 5 variáveis float e leia valores para cada uma. Mostre os valores armazenados em cada
uma das variáveis (0,5pts). Não usar vetor

b) Escreva uma função que recebe como parâmetro os valores float A,B,C, D, E e retorne o
maior valor. (1 pts). Considere que não haverá valores repetidos.

c) Escreva uma função que recebe como parâmetro os valores float A,B,C, D, E e retorne a
média dos valores valor. (1 pts).

