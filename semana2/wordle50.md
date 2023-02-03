<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>

# [Exercício 5 - Wordle50](https://cs50.harvard.edu/x/2023/psets/2/wordle50/)  

Para esse problema, você implementará um programa que se comporta de maneira semelhante ao popular jogo de adivinhação de palavras "Wordle".


<style type="text/css" rel="stylesheet">
.wrong {
  background-color: red
}

.right {
  background-color: green;
}

.close {
  background-color: yellow;
}
</style>

<pre><code>
$ ./wordle 5
<span class="right">This is WORDLE50</span>
You have 6 tries to guess the 5-letter word I'm thinking of
Input a 5-letter word: crash
Guess 1: <span class="close">c</span><span class="wrong">ra</span><span class="close">s</span><span class="wrong">h</span>
Input a 5-letter word: scone
Guess 2: <span class="right">s</span><span class="close">c</span><span class="wrong">o</span><span class="close">n</span><span class="right">e</span>
Input a 5-letter word: since
Guess 3: <span class="right">since</span>
You won!
</code></pre>

```
$ ./wordle 5
This is WORDLE50
Você tem 6 tentativas para adivinhar a palavra de 5 letras que estou pensando
Digite uma palavra de 5 letras: crash   
Guess 1: crash
Digite uma palavra de 5 letras: scone
Guess 2: scone
Digite uma palavra de 5 letras: since
Guess 3: since
Você ganhou!
```

# Começando  

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset2`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 2*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 2'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/2/wordle.zip`  
seguido de *ENTER* para baixar o zip [wordle.zip](../assets/ArquivosZips/semana2/wordle.zip) que contem a pasta *wordle* com os arquivos em txt e em C.  

4 - Execute o unzip: `unzip wordle.zip` para extrair a pasta *wordle* dentro da pasta *pset2*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm wordle.zip`  

6 - Agora entre na pasta: `cd wordle`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo `wordle.c`  bem como os arquivos `5.txt`, `6.txt`, `7.txt` e `8.txt`.  

A execução `code wordle.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  
* Se você tentar compilar o jogo agora, ele o fará sem erros, mas ao tentar executá-lo, você verá este erro:  

`Error opening file 0.txt.`  

É normal, porém, como você ainda não implementou parte do código, precisamos fazer com que essa mensagem de erro desapareça!

8 - No arquivo *wordle.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2023/x/wordle`;  

10 - Avalie o estilo do seu código: `style50 wordle.c`;  

11 - Envie seu código: `submit50 cs50/problems/2023/x/wordle` depois digite: `yes`  


# Fundo
As probabilidades são, se você é um usuário do Facebook, pelo menos um de seus amigos postou algo parecido com isto, especialmente no início de 2022, quando estava na moda:

<img src="../assets/wordle.png" />  

Se sim, seu amigo jogou Wordle e está compartilhando os resultados desse dia! A cada dia, uma nova “palavra secreta” é escolhida (a mesma para todos) e o objetivo é adivinhar qual é a palavra secreta em seis tentativas. Felizmente, como existem mais de seis palavras de cinco letras no idioma inglês, você pode obter algumas pistas ao longo do caminho, e a imagem acima mostra a progressão de seu amigo por meio de suas suposições, usando essas pistas para tentar se concentrar no palavra correta. 

Usando um esquema semelhante ao do jogo Mastermind, se depois de adivinhar aquela **letra ficar verde, significa que não só aquela letra está na palavra secreta daquele dia, mas também está na posição correta**. 

**Se ficar amarelo, significa que a letra adivinhada aparece em algum lugar na palavra, mas não naquele ponto**. 

**As letras que ficam cinzas não estão na palavra e podem ser omitidas de suposições futuras**.  

Vamos terminar de escrever um programa chamado wordle que nos permite recriar este jogo e jogá-lo em nosso terminal. Faremos algumas pequenas alterações no jogo (por exemplo, a maneira como ele lida com uma letra que aparece duas vezes em uma palavra não é a mesma que o jogo real, mas, para simplificar, vamos errar para facilidade de compreensão em vez de uma interpretação perfeitamente fiel), e **usaremos texto vermelho em vez de cinza para indicar letras que não estão na palavra**. 

No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, **qual é o comprimento da palavra que deseja adivinhar, entre 5 e 8 letras**.

Aqui estão alguns exemplos de como o programa deve funcionar. Por exemplo, 
**se o usuário omitir totalmente um argumento de linha de comando**:

```
$ ./wordle
Usage: ./wordle wordsize
```

**Se o usuário fornecer um argumento de linha de comando, mas não estiver no intervalo correto**:

```
$ ./wordle 4
Error: wordsize must be either 5, 6, 7, or 8
```

Veja como o programa pode funcionar **se o usuário fornecer uma chave de 5**:

```
$ ./wordle 5
This is WORDLE50
You have 6 tries to guess the 5-letter word I'm thinking of
Input a 5-letter word:
```

Nesse ponto, o usuário deve digitar uma palavra de 5 letras. Obviamente, o usuário pode ser teimoso e devemos garantir que ele siga as regras:

```
$ ./wordle 5
This is WORDLE50
You have 6 tries to guess the 5-letter word I'm thinking of
Input a 5-letter word: wordle
Input a 5-letter word: computer
Input a 5-letter word: okay
Input a 5-letter word: games
Guess 1: games
Input a 5-letter word:
```

Observe que nem contamos nenhuma dessas tentativas inválidas como palpites. Mas assim que eles fizeram uma tentativa legítima, contamos como um palpite e informamos sobre o status da palavra.  

Parece que o usuário tem algumas pistas agora; eles sabem que a palavra contém um `a` e um `e` em algum lugar, mas não nos locais exatos em que aparecem na palavra `games`. E eles sabem que `g`, `m` e `s` não aparecem na palavra, então suposições futuras podem omiti-las. Talvez eles possam tentar, digamos, a `heart` seguir! ❤️

# Especificação

Projete e implemente um programa, `wordle`, que completa a implementação de nosso clone Wordle50 do jogo. Você notará que algumas grandes partes deste programa já foram escritas para você – você não tem permissão para modificar nenhuma dessas partes do programa. Em vez disso, seu trabalho deve ser limitado aos sete `TODO`s que deixamos para você preencher. Cada uma dessas partes resolve um problema específico e recomendamos que você as resolva na ordem de 1 a 7. Cada `TODO` numerado corresponde ao mesmo item na lista abaixo.  

1 - No primeiro `TODO`, você deve garantir que o programa aceite um único argumento de linha de comando. vamos chamá-lo ***k*** para fins de discussão. Se o programa não foi executado com um único argumento de linha de comando, você deve imprimir a mensagem de erro conforme demonstramos acima e retornar `1`, encerrando o programa.  

2 - No segundo `TODO`, você deve se certificar de que ***k*** é um dos valores aceitáveis ​​(5, 6, 7 ou 8) e armazene esse valor em `wordsize`; precisaremos fazer uso disso mais tarde. Se o valor de ***k*** não for um desses quatro valores exatamente, você deve imprimir a mensagem de erro conforme demonstramos acima e retornar `1`, finalizando o programa.  

Depois disso, a equipe já escreveu algum código que irá percorrer e abrir a lista de palavras para o tamanho da palavra que o usuário deseja adivinhar e selecionar aleatoriamente uma das 1000 opções disponíveis. Não se preocupe em necessariamente entender todo esse código, não é importante para os propósitos desta tarefa. Veremos algo semelhante em uma tarefa posterior, e então fará muito mais sentido! Este é um bom lugar para parar e testar, antes de prosseguir para o próximo `TODO`, se seu código se comporta conforme o esperado. É sempre mais fácil depurar programas se você fizer isso metodicamente!  

3 - Para o terceiro `TODO`, você deve ajudar a se defender contra usuários teimosos, certificando-se de que seu palpite seja o comprimento correto. Para isso, voltaremos nossa atenção para a função `get_guess`, que você precisará implementar integralmente. Um usuário deve ser solicitado (como via `get_string`) a digitar um ***k***-letter word (lembre-se, esse valor é passado como um parâmetro para `get_guess`) e se eles fornecerem um palpite com o comprimento errado, eles devem ser solicitados novamente (como em [Mario](https://patyfil.github.io/cs50-cc50-harvard/semana1/mario-less)) até que forneçam exatamente o valor que você espera deles. No momento, o código de distribuição não faz isso, então você terá que fazer essa correção! Observe que, ao contrário do Wordle real, na verdade não verificamos se o palpite do usuário é uma palavra real; portanto, nesse sentido, o jogo talvez seja um pouco mais fácil. Todos os palpites neste jogo devem estar em **letras minúsculas**, e é aceitável que você assuma que o usuário não será tão teimoso a ponto de fornecer qualquer coisa além de letras minúsculas ao fazer um palpite. Uma vez obtida uma suposição legítima, ela pode ser corrigida `return`.  

4 - Em seguida, para o quarto `TODO`, precisamos acompanhar a “pontuação” de um usuário no jogo. Fazemos isso por letra - atribuindo uma  
pontuação de 2 (que `#define` d como `EXACT`) a uma letra no lugar correto,  
pontuação de 1 (que `#define` d como `CLOSE`) para uma letra que está na palavra, mas no lugar errado, ou  
pontuação de 0 (que `#define` d como `WRONG`) e uma base por palavra, para nos ajudar a detectar quando potencialmente acionamos o final do jogo ao vencer.  

Usaremos as pontuações de letras individuais quando codificarmos a impressão por cores. Para armazenar essas pontuações, precisamos de um array, que chamamos de `status`. No início do jogo, sem palpites, deve conter apenas 0s.  

Este é outro bom lugar para parar e testar seu código, principalmente no que se refere ao item 3 acima! Você notará que, neste ponto, quando finalmente inserir um palpite legítimo (ou seja, um que tenha o comprimento correto), seu programa provavelmente se parecerá com o seguinte:

```
Input a 5-letter word: computer
Input a 5-letter word: games
Guess 1:
Input a 5-letter word:
```

Isso é normal, no entanto! A implementação `print_word` é o `TODO` número 6, então não devemos esperar que o programa faça qualquer processamento dessa suposição neste momento. Claro, você sempre pode adicionar `printf` nas chamadas adicionais (apenas certifique-se de removê-las antes de enviar) como parte de sua estratégia de depuração!  

5 - O quinto `TODO` é definitivamente o maior e provavelmente o mais desafiador. Dentro da `check_word` função, cabe a você comparar cada uma das letras do `guess` com cada uma das letras do `choice` (que, lembre-se, é a “palavra secreta” desse jogo), e atribuir pontuações. Se as letras combinarem, conceda `EXACT`(2) pontos e `break` saia do loop - não há necessidade de continuar o loop se você já determinou que a letra está no lugar certo. Tecnicamente, se essa letra aparecer na palavra duas vezes, isso pode resultar em um bug, mas corrigir esse bug complica esse problema um pouco mais do que queremos agora, então vamos aceitar isso como um recurso da nossa versão! Se você achar que a letra está na palavra, mas não no lugar certo, dê `CLOSE`(1) ponto, mas não `break`! Afinal, essa letra pode aparecer mais tarde no lugar certo da palavra `choice` e, se for `break` cedo demais, o usuário nunca saberá disso! Na verdade, você não precisa definir explicitamente `WRONG`(0) pontos aqui, já que tratou disso no início da Etapa 4. Em última análise, você também deve resumir a pontuação total da palavra quando a conhece, porque é isso que esta função deveria finalmente retornar. Novamente, não tenha medo de usar `debug50` e/ou `printf`s conforme necessário para ajudá-lo a descobrir quais são os valores de diferentes variáveis ​​neste ponto - até que você implemente `print_word`, abaixo, o programa não oferecerá muito a você no forma de um ponto de verificação visual!

6 - Para o sexto `TODO`, você concluirá a implementação do `print_word`. Essa função deve examinar os valores com os quais você preencheu a matriz `status` e imprimir, caractere por caractere, cada letra do `guess` com o código de cor correto. Você deve ter notado alguns (de aparência assustadora!) `#define`s na parte superior do arquivo, nos quais fornecemos uma maneira mais simples de representar o que é chamado de [código de cores ANSI](https://en.wikipedia.org/wiki/ANSI_escape_code#Colors), que é basicamente um comando para alterar a cor da fonte do terminal. Você não precisa se preocupar em como implementar esses quatro valores (`GREEN`, `YELLOW`, `RED` e `RESET`, o último dos quais simplesmente retorna à fonte padrão do terminal) ou exatamente o que eles significam; em vez disso, você pode simplesmente usá-los (o poder da abstração!). Observe também que fornecemos um exemplo no código de distribuição onde imprimimos algum texto verde e, em seguida, redefinimos a cor, como parte da introdução do jogo. Portanto, sinta-se à vontade para usar a linha de código abaixo como inspiração para tentar alternar as cores:

`printf(GREEN"This is WORDLE50"RESET"\n");`  

É claro que, ao contrário do nosso exemplo, você provavelmente não deseja imprimir uma nova linha após cada caractere da palavra (em vez disso, deseja apenas uma nova linha no final, também redefinindo a cor da fonte!), para que não fique parecido com o abaixo de:

```
Input a 5-letter word: games
Guess 1: g
a
m
e
s
Input a 5-letter word:
```

7 - Finalmente, o sétimo `TODO` é apenas um pouco de arrumação antes do programa terminar. Se o `for` loop principal terminou normalmente, porque o usuário ficou sem palpites ou porque o quebramos ao acertar a palavra, é hora de relatar ao usuário o resultado do jogo. Se o usuário ganhou o jogo, basta imprimir `You won!` aqui. Caso contrário, você deve imprimir uma mensagem informando ao usuário qual era a palavra-alvo, para que eles saibam que o jogo estava sendo honesto com eles (e para que você tenha um meio de depurar se olhar para trás e perceber que seu código estava fornecendo pistas inadequadas ao longo do caminho!)

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>