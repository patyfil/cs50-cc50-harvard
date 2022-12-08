<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Exercício 4 - Cartão de Crédito (difícil)](https://cs50.harvard.edu/x/2022/psets/1/credit/)

## **<p style="color:red;">Algoritmo de Luhn</p>**


# Introdução ao Exercício  

Um cartão de crédito (ou débito), é claro, é um cartão de plástico com o qual você pode pagar por bens e serviços. Impresso nesse cartão está um número que também é armazenado em um banco de dados em algum lugar, de modo que, quando o cartão for usado para comprar algo, o credor saiba a quem cobrar.  

Há muitas pessoas com cartões de crédito no mundo, então esses números são bem longos: American Express usa números de 15 dígitos, MasterCard usa números de 16 dígitos e Visa usa números de 13 e 16 dígitos. E esses são números decimais (0 a 9), não binários, o que significa, por exemplo, que a American Express poderia imprimir até 10 ^ 15 = 1.000.000.000.000.000 de cartões exclusivos! (Isso é, um quatrilhão.)  
   
Na verdade, isso é um pouco exagerado, porque os números de cartão de crédito têm alguma estrutura. Todos os números American Express começam com 34 ou 37; a maioria dos números do MasterCard começa com 51, 52, 53, 54 ou 55 (eles também têm alguns outros números iniciais potenciais com os quais não nos preocupamos neste problema); e todos os números Visa começam com 4.  

Mas os números de cartão de crédito também têm um “checksum” embutido, uma relação matemática entre pelo menos um número e outros. Essa soma de verificação permite que os computadores (ou humanos que gostam de matemática) detectem erros de digitação (por exemplo, transposições), se não números fraudulentos, sem ter que consultar um banco de dados, que pode ser lento. É claro que um matemático desonesto certamente poderia criar um número falso que, no entanto, respeite a restrição matemática, portanto, uma pesquisa no banco de dados ainda é necessária para verificações mais rigorosas.  

## Algoritmo de Luhn  

Então, qual é a fórmula secreta? Bem, a maioria dos cartões usa um algoritmo inventado por Hans Peter Luhn, da IBM. De acordo com o algoritmo de Luhn, você pode determinar se um número de cartão de crédito é (sintaticamente) válido da seguinte maneira:
1.	Multiplique cada segundo digito por 2, começando com o penúltimo dígito do número e, em seguida, some os dígitos desses produtos.
2.	Adicione essa soma à soma dos dígitos que não foram multiplicados por 2.
3.	Se o último dígito do total for 0 (ou, mais formalmente, se o módulo total 10 for congruente com 0), o número é válido!
Isso é meio confuso, então vamos tentar um exemplo com o cartão Visa do David: 4003600000000014

A - Para fins de discussão, vamos primeiro sublinhar todos os outros dígitos, começando com o penúltimo dígito do número:  
><u>4</u>0<u>0</u>3<u>6</u>0<u>0</u>0<u>0</u>0<u>0</u>0<u>0</u>0<u>1</u>4  

&nbsp;

B - Vamos multiplicar cada um dos dígitos sublinhados por 2:  
1x2 + 0x2 + 0x2 + 0x2 + 0x2 + 6x2 + 0x2 + 4x2 (começando do último)  
Isso nos dá:  
2 + 0 + 0 + 0 + 0 + 12 + 0 + 8  

&nbsp;

C - Agora vamos adicionar os dígitos desses produtos (ou seja, não os próprios produtos):  
2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13  

&nbsp;

D - Agora vamos adicionar essa soma (13) à soma dos dígitos que não foram multiplicados por 2 (começando do final):  
13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20  

&nbsp;

E - Sim, o último dígito dessa soma (20) é 0, então o cartão de David é legítimo!  
Portanto, validar números de cartão de crédito não é difícil, mas se torna um pouco tedioso manualmente. 

&nbsp;


![credit](https://user-images.githubusercontent.com/41968938/206553676-7df57ee1-4b98-4071-b9fc-f1bc1ba9203d.jpg)

[Baixe a planilha](https://patyfil.github.io/cs50-cc50-harvard/assets/ex4credit)

OBS: Assim como sabemos que o número é par se for divisível por 2 e o resto for zero, podemos saber qual o último dígito do conjunto de números, dividindo o mesmo por 10, o resto dessa ***divisão inteira*** será o último número.  
Por exemplo:  
2***5***/10 = 2 com resto 5;  
4***7***/10 = 4 com resto 7;  
6/10 = 0 com resto 6;  
123***4***/10 = 123 com resto 4.

&nbsp;

# Exercício

Escreva um programa que solicite ao usuário um número de cartão de crédito e, em seguida, informe (via printf ) se é um número de cartão American Express, MasterCard ou Visa válido , de acordo com as definições de formato de cada um neste documento.  
&nbsp;

Para que possamos automatizar alguns testes do seu código, pedimos que a última linha de saída do seu programa seja AMEX\n ou MASTERCARD\n ou VISA\n ou INVALID\n , nada mais, nada menos.  
&nbsp;

Para simplificar, você pode assumir que o input do usuário será inteiramente numérico (ou seja, sem hífens, como pode ser impresso em um cartão real), mas não presuma que o input do usuário caberá em um `int` !  

Melhor usar `get_long` da biblioteca do CS50 para obter o input dos usuários. (Por que?)

&nbsp;

Considere o seguinte exemplo de como seu próprio programa deve se comportar quando um número de cartão de crédito válido é fornecido (sem hífens).  
```
`$ ./credit`  
Número: 4003600000000014  
VISA  
```

Agora, `get_long` em si rejeitará hífens (e mais) de qualquer maneira:  
```
$ ./credit  
Número: 4003-6000-0000-0014  
Número:   
Número: 4003600000000014  
VISA  
```

&nbsp;

Mas depende de você pegar entradas que não sejam números de cartão de crédito (por exemplo, um número de telefone), mesmo que sejam numéricos:  
```
$ ./credit  
Número: 6176292929  
INVALID  
```

Teste seu programa com um monte de entradas, válidas e inválidas. (Certamente o faremos!) Aqui estão alguns [números de cartão](https://developer.paypal.com/api/nvp-soap/payflow/integration-guide/test-transactions/#standard-test-cards) que o PayPal recomenda para teste.

> **Standard Test Cards**  
American Express	378282246310005  
Diners Club	30569309025904  
Discover	6011000990139424  
JCB	3566002020360505  
Mastercard	2223016768739313  
Visa	4012888888881881  

&nbsp;

# Começando:

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset1`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 1*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 1'`  

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2021/fall/psets/1/credit.zip`  
seguido de *ENTER* para baixar o zip *credit* que contem a pasta *credit* com o arquivo em C.  

4 - Execute o unzip: `unzip credit.zip` para extrair a pasta *credit* dentro da pasta *pset1*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm credit.zip`  

6 - Agora entre na pasta: `cd credit`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *credit.c*  
A execução `code credit.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *credit.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2022/x/credit`;  

10 - Avalie o estilo do seu código: `style50 credit.c`;  

11 - Envie seu código: `submit50 cs50/problems/2022/x/credit` depois digite: `yes`  

&nbsp;

<a href=https://cs50.me/cs50x>Ver o progresso no Curso</a>

&nbsp;

# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 1 - Crédito](https://www.youtube.com/watch?v=4Yv_T135hHk)

&nbsp;

# PASSO A PASSO DE FORMA RESUMIDA:  
American Express usa números de 15 dígitos, começando com 34 ou 37.  
MasterCard usa números de 16 dígitos, começando com 51, 52, 53, 54 ou 55.  
Visa usa números de 13 ou 16 dígitos, começando com o dígito 4.  
E esses são números decimais (0 a 9), não binários.  

## Algoritmo de Luhn  
1 - Multiplicamos os dígitos (de dois em dois) do cartão por 2, começando pelo penúltimo;  
2 - Some os resultados dos dígitos multiplicados;  
3 - Adicione essa soma a soma dos dígitos que não foram multiplicados por 2 no primeiro passo.  
4 - Se o último dígito do total for 0 (ou, se o módulo total 10 for congruente com 0), o número é válido!  
 

&nbsp;

# PSEUDOCÓDIGO
1 - Solicite ao usuário um ***número*** de cartão de crédito, usando `get_long`  
Obs: Os cartões de crédito normalmente têm entre 13 e 16 dígitos de identificação.

2 - Calcule a soma de ***verificação*** para descobrir se pode ser um cartão de crédito ou não (Algoritmo de Luhn);  
*Com base se o dígito final é ou não um zero.  
* Dica: Usar uma função a parte, que retorne um booleano, ou seja ***true*** se for um cartão válido e ***false*** se não for.

3 - Verificar os dígitos iniciais para saber a bandeira, em seguida imprimir se é Visa, Master...  

4 - Verificar o comprimento do cartão de crédito.  
*Caso não tenha o comprimento de algum cartão válido, deverá imprimir: número inválido.  

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>
