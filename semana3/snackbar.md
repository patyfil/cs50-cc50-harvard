<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>

# [Snackbar (Lanchonete)](https://cs50.harvard.edu/x/2023/problems/3/snackbar/)  

## Metas de aprendizagem  

* Pratique usando `struct`s  
* Escreva um algoritmo de busca linear  

# Introdução ao Exercício  

Imagine que você está na praia e quer pedir vários itens da lanchonete. Você tem uma quantia limitada de dinheiro e deseja obter um custo total para seus itens antes de fazer o pedido. Em `snackbar.c` você vai completar duas funções. A primeira é `add_items` qual vai adicionar pelo menos os 4 primeiros itens no cardápio do Beach Burger Shack. Em seguida, você concluirá o `get_cost` que implementará um algoritmo de pesquisa linear para pesquisar cada item escolhido e retornará o preço correspondente.

## dicas

* Você pode codificar os itens de menu e os preços na `add_items` função.  
* Há uma função em [strings.h](https://manual.cs50.io/#strings.h) que pode ser útil aqui.  

# Demonstração

```
$ ./snackbar   

Burger: $9.50
Vegan Burger: $11.00
Hot Dog: $5.00
Cheese Dog: $7.00
Fries: $5.00
Cheese Fries: $6.00
Cold Pressed Juice: $7.00
Cold Brew: $3.00
Water: $2.00
Soda: $2.00

Enter a food item: hot dog
Enter a food item: cheese fries
Enter a food item:

Your total cost is: $11.00
$
```

# Começando  

1 - Faça login em `code.cs50.io` usando sua conta do GitHub.  

2 - Clique dentro da janela do terminal e execute `cd`.  

3 - Execute `wget https://cdn.cs50.net/2022/fall/labs/3/snackbar.zip` seguido de Enter para baixar um zip chamado [snackbar.zip](https://patyfil.github.io/cs50-cc50-harvard/semana3/snackbar.zip) em seu codespace. Tome cuidado para não ignorar o espaço entre `wget` e o seguinte URL ou qualquer outro caractere!  

4 - Agora execute `unzip snackbar.zip` para criar uma pasta chamada `snackbar`.  

5 - Você não precisa mais do arquivo ZIP, então pode executar `rm snackbar.zip` e responder com “y” seguido de Enter no prompt.  

# Detalhes da Implementação  

A `main` função já está completa. Depois de chamar `add_items` para inicializar o `menu` array, ele imprimirá os itens de menu e seus preços, solicitando que você continue selecionando itens até pressionar enter sem digitar nada. Você deve concluir duas funções, `add_items`, que adiciona pelo menos os quatro primeiros itens de menu , e `get_cost` para retornar o custo de cada item. Ao criar um algoritmo de pesquisa linear em `get_cost`, certifique-se de que não diferencia maiúsculas de minúsculas.

# Pergunta para reflexão  

* Por que uma matriz de structsa é uma solução melhor aqui do que várias matrizes?

# Como testar seu código  

Seu programa deve se comportar da seguinte forma:  

```
snackbar/ $ ./snackbar

Welcome to Beach Burger Shack!
Choose from the following menu to order. Press enter when done.

Burger: $9.50
Vegan Burger: $11.00
Hot Dog: $5.00
Cheese Dog: $7.00
Fries: $5.00
Cheese Fries: $6.00
Cold Pressed Juice: $7.00
Cold Brew: $3.00
Water: $2.00
Soda: $2.00

Enter a food item: burger
Enter a food item: fries
Enter a food item: soda
Enter a food item: 

Your total cost is: $16.50
```

```
snackbar/ $ ./snackbar

Welcome to Beach Burger Shack!
Choose from the following menu to order. Press enter when done.

Burger: $9.50
Vegan Burger: $11.00
Hot Dog: $5.00
Cheese Dog: $7.00
Fries: $5.00
Cheese Fries: $6.00
Cold Pressed Juice: $7.00
Cold Brew: $3.00
Water: $2.00
Soda: $2.00

Enter a food item: cold brew
Enter a food item: hot dog
Enter a food item: 

Your total cost is: $8.00
```

Observe que o menu deve imprimir apenas os itens que você salvou na `menu` matriz.  

Não use `check50` para este!

Para avaliar o estilo do seu código, digite `$` no prompt.  

`style50 snackbar.c`  

# Como enviar  

Não há necessidade de enviar! Este é um problema prático opcional.

# SOLUÇÃO 

``` 
// Practice using structs
// Practice writing a linear search function

/**
 * Beach Burger Shack has the following 10 items on their menu
 * Burger: $9.5
 * Vegan Burger: $11
 * Hot Dog: $5
 * Cheese Dog: $7
 * Fries: $5
 * Cheese Fries: $6
 * Cold Pressed Juice: $7
 * Cold Brew: $3
 * Water: $2
 * Soda: $2
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

// Number of menu items
// Adjust this value (10) to number of items input below
#define NUM_ITEMS 10

// Menu itmes have item name and price
typedef struct
{
    string item;
    float price;
}
menu_item;

// Array de itens de menu
menu_item menu[NUM_ITEMS];

// Adiciona itens ao menu
void add_items(void);

// Calcular o custo total
float get_cost(string item);

int main(void)
{
    add_items();

    printf("\nWelcome to Beach Burger Shack!\n");
    printf("Choose from the following menu to order. Press enter when done.\n\n");

    for (int i = 0; i < NUM_ITEMS; i++)
    {
        printf("%s: $%.2f\n", menu[i].item, menu[i].price);
    }
    printf("\n");

    float total = 0;
    while (true)
    {
        string item = get_string("Enter a food item: ");
        if (strlen(item) == 0)
        {
            printf("\n");
            break;
        }

        total += get_cost(item);
    }

    printf("Your total cost is: $%.2f\n", total);
}

// Adicione pelo menos o primeiro itens para a matriz de menu
void add_items(void)
{
    menu[0].item = "Burger";
    menu[0].price = 9.50;
    
    menu[1].item = "Vegan Burger";
    menu[1].price = 11;
    
    menu[2].item = "Hot Dog";
    menu[2].price = 5;
    
    menu[3].item = "Cheese Dog";
    menu[3].price = 7;
    
    menu[4].item = "Fries";
    menu[4].price = 5;
    
    menu[5].item = "Cheese Fries";
    menu[5].price = 6;
    
    menu[6].item = "Cold Pressed Juice";
    menu[6].price = 7;
    
    menu[7].item = "Cold Brew";
    menu[7].price = 3;
    
    menu[8].item = "Water";
    menu[8].price = 2;
    
    menu[9].item = "Soda";
    menu[9].price = 2;
    
    return;
}

// Search through the menu array to find an item's cost
float get_cost(string item)
{
    // Linear search for item
    for (int i = 0; i < NUM_ITEMS; i++) 
    {
        if (strcasecmp(menu[i].item, item) == 0)
        {
            return menu[i].price;
        }
    }
    // Item was not found
    return 0.0;
}
```

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>