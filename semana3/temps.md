<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>

# [Average Temperatures (Temperaturas médias)](https://cs50.harvard.edu/x/2023/problems/3/temps/)  

## Metas de aprendizagem

* Pratique trabalhando com `struct`s  
* Pratique a aplicação de algoritmos de classificação  

# Introdução ao Exercício  

Parece que estamos quebrando recordes todos os anos para o clima mais quente já registrado. Os cientistas do clima acompanham o que é chamado de “novos normais” ao longo de vários anos, para que possamos prever e nos preparar melhor para as condições no futuro próximo. As normais oficiais são calculadas para um período uniforme de 30 anos e consistem em médias anuais/sazonais, mensais, diárias e horárias e estatísticas de temperatura, precipitação e outras variáveis ​​climatológicas de quase 15.000 estações meteorológicas dos EUA.

Julho é o mês mais quente do ano para a maioria das grandes cidades dos EUA. Temperaturas diurnas acima de 80 graus Fahrenheit ocorrem regularmente em quase todos os lugares. As exceções são algumas cidades ao longo da [costa do Pacífico](https://www.ncei.noaa.gov/products/land-based-station/us-climate-normals).

Neste problema, você classificará os valores médios de alta temperatura para 10 cidades, em ordem decrescente.

## dicas

* Ao copiar um `struct` para outro, não há necessidade de atribuir elementos individuais. O todo `struct` pode ser atribuído em uma instrução.
* Mesmo que uma `void` função não possa retornar nenhum valor, uma `return` instrução pode ser usada para encerrar a função.

# Demonstração  

```
$ ./temps    

Phoenix: 107
Las Vegas: 105
Austin: 97
Miami: 97
Denver: 90
Chicago: 85
New York: 85
Boston: 82
Los Angeles: 82
San Francisco: 66
$       
```

# Começando  

1 - Faça login em `code.cs50.io` usando sua conta do GitHub.  

2 - Clique dentro da janela do terminal e execute `cd`.  

3 - Execute `wget https://cdn.cs50.net/2022/fall/labs/3/temps.zip` seguido de Enter para baixar um zip chamado [temps.zip](https://patyfil.github.io/cs50-cc50-harvard/semana3/temps.zip) em seu codespace. Tome cuidado para não ignorar o espaço entre `wget` e o seguinte URL ou qualquer outro caractere!  

4 - Agora execute `unzip temps.zip` para criar uma pasta chamada `temps`.  

5 - Você não precisa mais do arquivo ZIP, então pode executar `rm temps.zip` e responder com “y” seguido de Enter no prompt.  

# Detalhes da Implementação  

A `main` função inicializa o `temps` array, chama a `sort_cities` função e imprime o array em ordem de classificação. Você usará um algoritmo de classificação O(n 2) de sua escolha (possivelmente classificação por bolha, classificação por seleção ou classificação por inserção) para classificar a matriz por temperatura, em ordem decrescente.

# Pergunta para reflexão  

* Qual dos algoritmos de ordenação você escolheu e por quê?

# Como testar seu código  

Seu programa deve se comportar de acordo com os exemplos abaixo.

```
$ ./temps

Phoenix: 107
Las Vegas: 105
Austin: 97
Miami: 97
Denver: 90
Chicago: 85
New York: 85
Boston: 82
Los Angeles: 82
San Francisco: 66
$ 
```

Não use `check50` para este!

Para avaliar o estilo do seu código, digite `$` no prompt.  

`style50 temps.c`  

# Como enviar  

Não há necessidade de enviar! Este é um problema prático opcional.  

# SOLUÇÃO

```
// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
} avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // Add your code here
    avg_temp descending[NUM_CITIES];

    // Iterate through all temps and establish variables
    for (int i = 0; i < NUM_CITIES; i++)
    {
        int maximum = temps[i].temp;
        string max_city = temps[i].city;
        int pointer = i;
        int test = temps[i].temp;
        string test_city = temps[i].city;
        for (int j = i; j < NUM_CITIES; j++)
        {
            if (temps[j].temp > maximum)
            {
                // Set max value to the lowest value in the set
                maximum = temps[j].temp;
                max_city = temps[j].city;
                // Set pointer value to j so we can keep j outside of this loop
                pointer = j;
            }
        }
        // Assign array[i] with min
        temps[i].temp = maximum;
        temps[i].city = max_city;
        // Replace pointer position with temp
        temps[pointer].temp = test;
        temps[pointer].city = test_city;
    }
    return;
}
```

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>