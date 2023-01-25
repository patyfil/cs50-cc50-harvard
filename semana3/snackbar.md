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



<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>