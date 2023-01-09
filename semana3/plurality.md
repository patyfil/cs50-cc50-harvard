<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>

# [Exercício 1 - Plurality (Pluralidade)](https://cs50.harvard.edu/x/2023/psets/3/plurality/)  

Para este programa, você implementará um programa que executa uma eleição de pluralidade, conforme abaixo.  

```
$ ./plurality Alice Bob Charlie
Number of voters: 4
Vote: Alice
Vote: Bob
Vote: Charlie
Vote: Alice
Alice
```
```
$ ./plurality Alice Bob Charlie
Número de eleitores: 4
Voto: Alice
Voto: Bob
Voto: Charlie
Voto: Alice
Alice
```

# Introdução ao Exercício

As eleições acontecem de todas as formas e tamanhos. No Reino Unido, o [primeiro-ministro](https://www.parliament.uk/education/about-your-parliament/general-elections/) é oficialmente nomeado pelo monarca, que geralmente escolhe o líder do partido político que ganha mais assentos na Câmara dos Comuns. Os Estados Unidos usam um processo de [Colégio Eleitoral](https://www.archives.gov/federal-register/electoral-college/about.html) de várias etapas , no qual os cidadãos votam sobre como cada estado deve alocar os Eleitores que então elegem o Presidente.  

Talvez a maneira mais simples de realizar uma eleição, no entanto, seja por meio de um método comumente conhecido como “voto plural” (também conhecido como “primeiro a chegar” ou “o vencedor leva tudo”). Na votação por pluralidade, cada eleitor pode votar em um candidato. No final da eleição, o candidato que tiver o maior número de votos é declarado o vencedor da eleição.  

# Começando  

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset3`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 3*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 3'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/3/plurality.zip`  
seguido de *ENTER* para baixar o arquivo zipado [plurality.zip](https://patyfil.github.io/cs50-cc50-harvard/semana3/plurality.zip) que contem a pasta *plurality* com seus arquivos.  

4 - Execute o unzip: `unzip plurality.zip` para extrair a pasta *plurality* dentro da pasta *pset3*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm plurality.zip`  

6 - Agora entre na pasta: `cd plurality`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *plurality.c*  
A execução `code plurality.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - Leia as instruções logo abaixo;

9 - Teste seu código: `check50 cs50/labs/2023/x/plurality`;  

10 - Avalie o estilo do seu código: `style50 plurality.c`;  

11 - Envie seu código: `submit50 cs50/labs/2023/x/plurality` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# Compreensão

Vamos dar uma olhada em `plurality.c` e ler o código de distribuição que foi fornecido a você.

A linha `#define MAX 9` é alguma sintaxe usada aqui para significar que `MAX` é uma constante (igual a `9`) que pode ser usada ao longo do programa. Aqui, representa o número máximo de candidatos que uma eleição pode ter.  

O arquivo então define uma `struct` chamada `candidate`. Cada um `candidate` tem dois campos: uma `string` chamada `name` que representa o nome do candidato e um `int` chamado `votes` que representa o número de votos que o candidato possui. Em seguida, o arquivo define um array global de `candidates`, onde cada elemento é um `candidate`.

Agora, dê uma olhada na função `main`. Veja se você consegue descobrir onde o programa define uma variável global `candidate_count` que representa o número de candidatos na eleição, copia os argumentos da linha de comando no array `candidatese` e pede ao usuário para digitar o número de eleitores. Em seguida, o programa permite que cada eleitor digite um voto (entendeu como?), chamando a função `vote`  em cada candidato votado. Por fim, `main` faz uma chamada à função `print_winner` para imprimir o vencedor (ou vencedores) da eleição.  

Porém, se você olhar mais abaixo no arquivo, notará que as funções `vote` e `print_winner` foram deixadas em branco. Esta parte depende de você para concluir!

# Especificações

Conclua a implementação de `plurality.c` de forma que o programa simule uma eleição de voto plural.

* Conclua a função de `vote`.
    * `vote` recebe um único argumento, `string` chamado `name`, representando o nome do candidato que foi votado.
    * Se o `name` corresponder a um dos nomes dos candidatos na eleição, atualize o total de votos desse candidato para contabilizar o novo voto. A função `vote` neste caso deve retornar `true` para indicar uma votação bem-sucedida.  
    * Caso o `name` não corresponder com o nome de nenhum dos candidatos na eleição, nenhum total de votos deve mudar, e a função `vote` deve retornar `false` para indicar uma cédula inválida.
    * Você pode presumir que não haverá dois candidatos com o mesmo nome.
* Conclua a função `print_winner`.
    * A função deve imprimir o nome do candidato que recebeu mais votos na eleição e, em seguida, imprimir uma quebra de linha.
    * É possível que a eleição termine empatada se vários candidatos tiverem, cada um, o número máximo de votos. Nesse caso, você deve fornecer os nomes de cada um dos candidatos vencedores, cada um em uma linha separada.  

Você não deve modificar `plurality.c` nada além das implementações das funções `vote` e `print_winner`(e a inclusão de arquivos de cabeçalho adicionais, se desejar).

# Uso

Seu programa deve se comportar de acordo com os exemplos abaixo.

```
$ ./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Bob
Vote: Alice
Alice
```
```
$ ./plurality Alice Bob
Number of voters: 3
Vote: Alice
Vote: Charlie
Invalid vote.
Vote: Alice
Alice
```
```
$ ./plurality Alice Bob Charlie
Number of voters: 5
Vote: Alice
Vote: Charlie
Vote: Bob
Vote: Bob
Vote: Alice
Alice
Bob
```

# PASSO A PASSO  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 3 - Pluralidade](https://youtu.be/cZwLHm3PPUk)

&nbsp;

# Como testar o seu código?

Certifique-se de testar seu código para ter certeza de que ele lida com as seguintes situações:  

* Uma eleição com qualquer número de candidatos (até o `MAX` de `9`);  
* Votar em um candidato pelo nome;  
* Votos inválidos para candidatos que não constam na cédula;  
* Imprimindo o vencedor da eleição se houver apenas um;  
* Imprimindo o vencedor da eleição se houver vários vencedores;  

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/3-Algoritmos.html">Voltar ao Índice da Semana 3</a>
</p>