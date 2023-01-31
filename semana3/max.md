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

3 - Execute `wget https://cdn.cs50.net/2022/fall/labs/3/max.zip` seguido de Enter para baixar um zip chamado [max.zip](src="../assets/ArquivosZips/semana3/max.zip") em seu codespace. Tome cuidado para não ignorar o espaço entre `wget` e o seguinte URL ou qualquer outro caractere!  

4 - Agora execute `unzip max.zip` para criar uma pasta chamada `max`.  

5 - Você não precisa mais do arquivo ZIP, então pode executar `rm max.zip` e responder com “y” seguido de Enter no prompt.  

# Detalhes da Implementação  

A `main` função inicializa a matriz, pede ao usuário para inserir valores e, em seguida, passa a matriz e o número de itens para a `max` função. Conclua a `max` função iterando em todos os elementos da matriz e retorne o valor máximo.

# Pergunta para reflexão  

* Que tipos de programas você pode imaginar que podem se beneficiar de uma `max` função auxiliar?

# Como testar seu código  

Seu programa deve se comportar de acordo com os exemplos abaixo.

```
max/ $ ./max
Number of elements: 3
Element 0: 2
Element 1: 10
Element 2: -1
The max value is 10.
```

```
max/ $ ./max
Number of elements: 4
Element 0: -100
Element 1: -200
Element 2: -3
Element 3: -5000
The max value is -3.
```

Você pode verificar seu código usando `check50`, um programa que o CS50 usará para testar seu código quando você enviar, digitando o seguinte no `$` prompt. Mas certifique-se de testar você também!  

`check50 cs50/labs/2023/x/max`  

Para avaliar o estilo do seu código, digite `$` no prompt.  

`style50 max.c`  

# Como enviar  

Não há necessidade de enviar! Este é um problema prático opcional.

# SOLUÇÃO

```
// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    int maior = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maior = array[i];

        }
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}
```


<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>