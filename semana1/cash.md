<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Exercício 3 - Dinheiro (versão fácil)](https://cs50.harvard.edu/x/2022/psets/1/cash/)  

### Algoritmos Gulosos ou Algoritmos Ambiciosos  

&nbsp;

![image](https://user-images.githubusercontent.com/41968938/206263437-66d0ce05-30b9-45b3-9e10-527aaa69c4d9.png)

Centavos = 0,01  
Níckels = 0,05  
Dimes = 0,10  
Quarters = 0,25  

&nbsp;

## Introdução ao Exercício  
Ao dar o troco, é provável que você queira minimizar o número de moedas que está distribuindo para cada cliente, para não acabar com o estoque (ou irritar o cliente!). Felizmente, a ciência da computação deu aos caixas em todos os lugares maneiras de minimizar o número de moedas devidas: algoritmos ambiciosos, também conhecidos como gulosos ou gananciosos.  

De acordo com o Instituto Nacional de Padrões e Tecnologia (NIST), um algoritmo ambicioso é aquele “*que sempre pega a melhor solução imediata, ou local, enquanto encontra uma resposta. Algoritmos ambiciosos encontram a solução geral ou globalmente ideal para alguns problemas de otimização, mas podem encontrar soluções menos do que ideais para algumas instâncias de outros problemas.*”  

O que tudo isso significa? Bem, suponha que um caixa deva a um cliente algum troco e na gaveta desse caixa estejam moedas de 25, 10, 5 e 1 centavo(s). O problema a ser resolvido é decidir quais moedas e quantas de cada uma entregar ao cliente. Pense em um caixa “ganancioso” como alguém que quer tirar o maior proveito possível desse problema com cada moeda que tira da gaveta.   

Por exemplo, se algum cliente deve pagar 41 centavos, o melhor/maior pagamento que pode ser feito é 25 centavos. Esse pagamento é "melhor" na medida em que nos deixa mais perto de 0 ¢ mais rápido do que qualquer outra moeda faria. Observe que um pagamento desse tamanho reduziria o que era um problema de 41 ¢ a um problema de 16 ¢, já que 41 - 25 = 16. Ou seja, o restante é um problema semelhante, mas menor.  

Desnecessário dizer que outro pagamento de 25 centavos seria muito grande (supondo que o caixa prefere não perder dinheiro), e assim nosso caixa ganancioso mudaria para um pagamento de 10 centavos, deixando-o com um problema de 6 centavos. Nesse ponto, a ganância pede um pagamento de 5 centavos seguido de um pagamento de 1 centavo, ponto em que o problema é resolvido. O cliente recebe um Quarter, um Dime, um Níckel e um Centavo: quatro moedas no total.  

Acontece que essa abordagem gananciosa (do algoritmo) não é apenas ótima localmente, mas também globalmente para a moeda dos Estados Unidos (e também da União Europeia). Ou seja, desde que o caixa tenha o suficiente de cada moeda, essa abordagem do maior para o menor renderá o menor número possível de moedas. Quão menor? Bem, diga-nos você!


## Exercício  
Implemente um programa que primeiro pergunte ao usuário quantos centavos deve ao cliente e em seguida imprime o menor número de moedas com as quais esse pagamento pode ser feito.  

Na verdade, `main` já está implementado para você. Mas observe como `main` chama várias funções que ainda não foram implementadas!  
Uma dessas funções, `get_cents`, não aceita argumentos (conforme indicado por void) e retorna um int.  
O restante das funções recebe um argumento, um int, e também retorna um int.  
Todos eles atualmente retornam 0 para que o código seja compilado.  
Mas você vai querer substituir cada TODO e return 0; pelo seu próprio código. 

Conclua a implementação dessas funções da seguinte maneira:  

•	Implemente `get_cents` de forma que a função solicite ao usuário um número de centavos usando `get_int` e, em seguida, retorne esse número como um int.  
Se o usuário inserir um negativo int, seu código deverá solicitar ao usuário novamente. (Mas você não precisa se preocupar com a entrada do usuário, por exemplo, uma string, pois `get_int` cuidará disso para você.) É provável que você encontre um *do while* loop de ajuda, como em mario.c!  
•	Implemente `calculate_quarters` de forma que a função calcule (e retorne como um int) quantas moedas de 25 centavos o cliente deve receber se for devido a ele.  
Por exemplo, se cents for 25, `calculate_quarters` deve retornar 1.  
Se cents for 26 ou 49 (ou qualquer coisa no meio, então `calculate_quarters` também deve retornar 1.  
Se cents for 50 ou 74 (ou qualquer coisa no meio), então `calculate_quarters` deve retornar 2. E assim por diante.  
•	Implemente `calculate_dimes` de forma que a função calcule o mesmo para moedas de dez centavos.  
•	Implemente `calculate_nickels` de forma que a função calcule o mesmo para 5 centavos.  
•	Implemente `calculate_pennies` de forma que a função calcule o mesmo para 1 centavo.  

Observe que, ao contrário das funções que têm apenas efeitos colaterais, as funções que retornam um valor devem fazê-lo explicitamente com return!  

## Tome cuidado para não modificar o próprio código de distribuição, apenas substitua os TODOs fornecidos e o valor subsequente return!  

Observe também que, lembrando a ideia de abstração, cada uma de suas funções de cálculo deve aceitar qualquer valor de cents, não apenas os valores que o algoritmo ganancioso pode sugerir. Se cents for 85, por exemplo, `calculate_dimes` deve retornar 8.  

Dica  
•	Lembre-se de que há vários programas de exemplo no Código-fonte da Semana 1 que ilustram como as funções podem retornar um valor.  
Você pode achar `discount1.c` e `discount2.c` perspicaz.  

Seu programa deve se comportar de acordo com os exemplos abaixo.  
```
$ ./cash  
Change owed: 41  
4  
```

```
$ ./cash  
Change owed: -41  
Change owed: foo  
Change owed: 41  
4  
```

```
$ ./cash
Troco devido: 0.41
4
```
```
 $ ./cash
Troco devido: -0.41
Troco devido: foo
Troco devido: 0.41
4
```  

&nbsp;

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset1`  
OBS: Caso a pasta possua acento gráfico, por exemplo: *Módulo 1-C*  
Será necessário colocar aspas para entrar na pasta: `cd 'Módulo 1-C'`  

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2021/fall/psets/1/cash.zip`  
seguido de *ENTER* para baixar o zip *cash* que contem a pasta *cash* com o arquivo em C.  

4 - Execute o unzip: `unzip cash.zip` para extrair a pasta *cash* dentro da pasta *pset1*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm cash.zip`  

6 - Agora entre na pasta: `cd cash`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *cash.c*  
A execução `code cash.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *cash.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2022/x/cash`;  

10 - Avalie o estilo do seu código: `style50 cash.c`;  

11 - Envie seu código: `submit50 cs50/problems/2022/x/cash` depois digite: `yes`  

&nbsp;

# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 1 - Dinheiro](https://www.youtube.com/watch?v=mPQHKi-qjRk)

## Harvard
Como testar seu código
Para este programa, tente testar seu código manualmente, é uma boa prática:  

•	Se você inserir -1, seu programa solicitará novamente?  
•	Se você insere 0, o seu programa produz 0?  
•	Se você inserir 1, o seu programa produz 1 (ou seja, um centavo)?  
•	Se você inserir 4, seu programa gera 4 (ou seja, quatro centavos)?  
•	Se você inserir 5, o seu programa produz 1 (ou seja, um níquel)?  
•	Se você inserir 24, seu programa gera 6 (ou seja, duas moedas e quatro moedas de um centavo)?  
•	Se você inserir 25, o seu programa produz 1 (ou seja, um quarto)?  
•	Se você inserir 26, o seu programa produz 2 (ou seja, um quarto e um centavo)?  
•	Se você inserir 99, seu programa produz 9 (ou seja, três quartos, duas moedas e quatro centavos)?  


## Fundação Estudar
Seu código funciona conforme prescrito quando você insere:  

•	-1.00 (ou outros números negativos)?  
•	0.00 ?  
•	0.01 (ou outros números positivos)?  
•	letras ou palavras?  
•	nenhuma entrada, quando você apenas pressiona Enter?  



&nbsp;

&nbsp;



Ver progresso no curso:  https://cs50.me/cs50x  

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>
