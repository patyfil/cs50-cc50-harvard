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

Por exemplo, se quiséssemos pontuar a palavra `Code`, observaríamos que, em geral, as regras do Scrabble `C` valem `3` pontos, `o` valem `1` pontos, `d` valem `2` pontos e `e` valem `1` pontos. Somando estes, obtemos que `Code` vale `3 + 1 + 2 + 1 = 7` pontos.



# DICA  

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
