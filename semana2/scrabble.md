<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>

# [Laboratório 2 - Scrabble (Palavras Cruzadas)](https://cs50.harvard.edu/x/2022/labs/2/#lab-2-scrabble)

Determine qual das duas palavras do Scrabble vale mais.

```
$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
```

# Começando  

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset2`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 2*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 2'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2021/fall/labs/2/scrabble.zip`  
seguido de *ENTER* para baixar o zip *scrabble.zip* que contem a pasta *scrabble* com o arquivo em C.  

4 - Execute o unzip: `unzip scrabble.zip` para extrair a pasta *scrabble* dentro da pasta *pset2*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm scrabble.zip`  

6 - Agora entre na pasta: `cd scrabble`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *scrabble.c*  
A execução `code scrabble.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *scrabble.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/labs/2022/x/scrabble`;  

10 - Avalie o estilo do seu código: `style50 scrabble.c`;  

11 - Envie seu código: `submit50 cs50/labs/2022/x/scrabble` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# Introdução ao Exercício  

No jogo de [Scrabble](https://scrabble.hasbro.com/en-us/rules) , os jogadores criam palavras para marcar pontos, e o número de pontos é a soma dos valores de pontos de cada letra da palavra.  

| `A` | `B` | `C` | `D` | `E` | `F` | `G` | `H` | `I` | `J` | `K` | `L` | `M` | `N` | `O` | `P` | `Q` | `R` | `S` | `T` | `U` | `V` | `W` | `X` | `Y` | `Z` |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| 1 | 3 | 3 | 2 | 1 | 4 | 2 | 4 | 1 | 8 | 5 | 1 | 3 | 1 | 1 | 3 | 10 | 1 | 1 | 1 | 1 | 4 | 4 | 8 | 4 | 10 |

Por exemplo, se quiséssemos pontuar a palavra `Code`, observaríamos que, em geral, nas regras do Scrabble, o `C` vale `3` pontos, `O` vale `1` ponto, `D` vale `2` pontos e `E` vale `1` ponto. Somando estes, obtemos que `Code` vale `3 + 1 + 2 + 1 = 7` pontos.

# Detalhes de Implementação  

Conclua a implementação de `scrabble.c`, de modo que ele determine o vencedor de um jogo curto do tipo scrabble, em que dois jogadores inserem sua palavra, e o jogador com maior pontuação vence.

* Observe que armazenamos os valores dos pontos de cada letra do alfabeto em uma matriz inteira chamada `POINTS`.
   * Por exemplo, `A` ou `a` vale `1` ponto (representado por `POINTS[0]`), `B` ou `b` vale `3` pontos (representado por `POINTS[1]`), etc.  
* Observe que criamos um protótipo para uma função auxiliar chamada `compute_score()` que recebe uma `string` como entrada e retorna um arquivo `int`. Sempre que quisermos atribuir valores de pontos a uma palavra específica, podemos chamar essa função. Observe que esse protótipo é necessário para C saber que `compute_score()` existe posteriormente no programa.
* Em `main()`, o programa solicita aos dois jogadores suas palavras usando a função `get_string()`. Esses valores são armazenados dentro de variáveis ​​chamadas `word1` e `word2`.
* Em `compute_score()`, seu programa deve calcular, usando o `POINTS` array, e retornar a pontuação para o argumento string. Caracteres que não são letras devem receber zero pontos, e letras maiúsculas e minúsculas devem receber os mesmos valores de pontos.
   * Por exemplo, `!` vale `0` pontos enquanto `A` e `a` ambos valem `1` ponto.
   * Embora as regras do Scrabble normalmente exijam que uma palavra esteja no dicionário, não há necessidade de verificar isso neste problema!
* Em `main()`, seu programa deve imprimir, dependendo da pontuação dos jogadores, `Player 1 wins!`, `Player 2 wins!` ou `Tie!`.  


## Dicas
* Você pode encontrar as funções `isupper()` e `islower()` ser útil para você. Essas funções recebem um caractere como argumento e retornam um booleano.

* Para encontrar o valor no `n` índice de um array chamado `arr`, podemos escrever `arr[n]`. Também podemos aplicar isso a strings, pois strings são arrays de caracteres.

* Lembre-se de que os computadores representam caracteres usando [ASCII](https://asciitable.com/), um padrão que representa cada caractere como um número.

# Como testar seu código
Seu programa deve se comportar de acordo com os exemplos abaixo.

```
$ ./scrabble
Player 1: Question?
Player 2: Question!
Tie!
```
```
$ ./scrabble
Player 1: Oh,
Player 2: hai!
Player 2 wins!
```
```
$ ./scrabble
Player 1: COMPUTER
Player 2: science
Player 1 wins!
```
```
$ ./scrabble
Player 1: Scrabble
Player 2: wiNNeR
Player 1 wins!
```

# DICA - Passo a passo 

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: Lab 2 - Scrabble](https://www.youtube.com/watch?v=6Wn1eb0eE_4)

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>
