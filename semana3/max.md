<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>

# [Máx](https://cs50.harvard.edu/x/2023/problems/3/max/)  

## Metas de aprendizagem  
* Passar um array para uma função
* Crie uma função auxiliar que encontre um valor máximo

# Introdução ao Exercício  

Existem muitas situações em que você achará útil ter uma função que encontre o valor máximo (e mínimo) em uma matriz. Como não há `max`função interna em `C`, você criará uma neste problema prático. Você pode usá-lo em conjuntos de problemas futuros, onde pode ser útil!  

## dicas
 
* Comece com uma variável que monitore seu valor máximo. Existem duas maneiras de inicializar isso. Você pode começar usando o menor valor possível (tenha cuidado para não começar com zero, pois o valor máximo pode ser um número negativo!) ou pode começar com o primeiro elemento da matriz.
* Percorra a matriz e redefina esse valor máximo sempre que encontrar um valor maior.

# Demonstração

```
$ ./max

Number of elements: 3
Element 0: 1
Element 1: 2
Element 2: 3
The max value is 3.
$ ./max
Number of elements: 5
Element 0: -10
Element 1: 9
Element 2: 0
Element 3: 2
Element 4: 1
The max value is 9.
$ ./max
Number of elements: 3
Element 0: -100
Element 1: -50
Element 2: -10
The max value is -10.
$
```

# Começando  

1 - Faça login em `code.cs50.io` usando sua conta do GitHub.  

2 - Clique dentro da janela do terminal e execute `cd`.  

3 - Execute `wget https://cdn.cs50.net/2022/fall/labs/3/max.zip` seguido de Enter para baixar um zip chamado [max.zip](https://patyfil.github.io/cs50-cc50-harvard/semana3/max.zip) em seu codespace. Tome cuidado para não ignorar o espaço entre `wget` e o seguinte URL ou qualquer outro caractere!  

4 - Agora execute `unzip max.zip` para criar uma pasta chamada `max`.  

5 - Você não precisa mais do arquivo ZIP, então pode executar `rm max.zip` e responder com “y” seguido de Enter no prompt.  

# Detalhes da Implementação  



# Pergunta para reflexão  

Por que você precisa de um caso base sempre que cria uma função recursiva?

# Como testar seu código  

Seu programa deve se comportar de acordo com os exemplos abaixo.


Não use `check50` para este!

Para avaliar o estilo do seu código, digite `$` no prompt.  

`style50 max.c`  

# Como enviar  

Não há necessidade de enviar! Este é um problema prático opcional.

# Uma implementação mais completa  



<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>