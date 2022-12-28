<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>

# [Exercício 1 - Readability (Legibilidade)](https://cs50.harvard.edu/x/2022/psets/2/readability/)

Para este problema, você implementará um programa que calcula o nível (Grau) aproximado necessário para compreender algum texto, conforme abaixo.

```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!

Texto: Parabéns! Hoje é seu dia. Você está indo para ótimos lugares! Você está com tudo!  

Grau 3
```

# Começando:

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar na pasta da semana: `cd pset2`  
OBS: Caso a pasta possua outro nome com espaço, por exemplo: *Semana 2*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 2'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/2/readability.zip`  
seguido de *ENTER* para baixar o zip *readability.zip* que contem a pasta *readability* com o arquivo em C.  

4 - Execute o unzip: `unzip readability.zip` para extrair a pasta *readability* dentro da pasta *pset2*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm readability.zip`  

6 - Agora entre na pasta: `cd readability`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *readability.c*  
A execução `code readability.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *readability.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2022/x/readability`;  

10 - Avalie o estilo do seu código: `style50 readability.c`;  

11 - Envie seu código: `submit50 cs50/problems/2022/x/readability` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# Introdução ao Exercício  

De acordo com a [Scholastic](https://www.scholastic.com/teachers/teaching-tools/collections/guided-reading-book-lists-for-every-level.html), o Livro "Charlotte's Web" de E.B. White está entre um nível de leitura de segunda e quarta série, e "The Giver" de Lois Lowry está entre um nível de leitura de oitava e décima segunda série. O que significa, porém, para um livro estar em um determinado nível de leitura?

Bem, em muitos casos, um especialista humano pode ler um livro e tomar uma decisão sobre a série (ou seja, o ano escolar) para o qual ele acha que o livro é mais apropriado. Mas um algoritmo provavelmente poderia descobrir isso também!

Então, que tipos de traços são característicos de níveis de leitura mais altos? Bem, palavras mais longas provavelmente se correlacionam com níveis de leitura mais altos. Da mesma forma, frases mais longas provavelmente também se correlacionam com níveis de leitura mais altos.

Vários “testes de legibilidade” foram desenvolvidos ao longo dos anos que definem fórmulas para calcular o nível de leitura de um texto. Um desses testes de legibilidade é o índice Coleman-Liau . O índice Coleman-Liau de um texto é projetado para produzir o nível de escolaridade (EUA) necessário para entender algum texto. A fórmula é  

`index = 0.0588 * L - 0.296 * S - 15.8`  

onde `L` é o número médio de letras por 100 palavras no texto e `S` é o número médio de frases por 100 palavras no texto.

Vamos escrever um programa chamado `readability` que pega um texto e determina seu nível de leitura. Por exemplo, se o usuário digitar uma linha de texto do Dr. Seuss, o programa deve se comportar da seguinte forma:  
```
$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
``` 

O texto inserido pelo usuário tem 65 letras, 4 frases e 14 palavras. 65 letras por 14 palavras é uma média de cerca de 464,29 letras por 100 palavras (porque 65/14 * 100 = 464,29). E 4 sentenças por 14 palavras é uma média de cerca de 28,57 sentenças por 100 palavras (porque 4/14 * 100 = 28,57). Conectado à fórmula de Coleman-Liau e arredondado para o inteiro mais próximo, obtemos uma resposta de 3 (porque 0,0588 * 464,29 - 0,296 * 28,57 - 15,8 = 3): portanto, esta passagem está no nível de leitura da terceira série.  

Vamos tentar outro:  

```
$ ./readability
Text: Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.
Grade 5
```  

Este texto tem 214 letras, 4 frases e 56 palavras. Isso resulta em cerca de 382,14 letras por 100 palavras e 7,14 frases por 100 palavras. Conectados à fórmula de Coleman-Liau, obtemos um nível de leitura da quinta série.

À medida que aumenta o número médio de letras e palavras por frase, o índice Coleman-Liau dá ao texto um nível de leitura mais alto. Se você pegar este parágrafo, por exemplo, que tem palavras e sentenças mais longas do que qualquer um dos dois exemplos anteriores, a fórmula daria ao texto um nível de leitura do décimo segundo ano.

```
$ ./readability
Text: As the average number of letters and words per sentence increases, the Coleman-Liau index gives the text a higher reading level. If you were to take this paragraph, for instance, which has longer words and sentences than either of the prior two examples, the formula would give the text an twelfth-grade reading level.
Grade 12
```
Tente!

Para experimentar a implementação deste problema pela equipe, execute  

`./readability`  

within [this sandbox](http://bit.ly/2ulEXkw).

# Exercício  

Projete e implemente um programa, `readability`, que calcula o índice de texto de Coleman-Liau.  

* Implemente seu programa em um arquivo chamado `readability.c` em um diretório chamado `readability`.  
* Seu programa deve solicitar ao usuário uma `string` de texto usando `get_string`.  
* Seu programa deve contar o número de letras, palavras e frases no texto. Você pode assumir que uma letra é qualquer caractere minúsculo de `a` a `z` ou qualquer caractere maiúsculo de `A` a `Z`, qualquer sequência de caracteres separados por espaços deve contar como uma palavra e que qualquer ocorrência de um ponto final, ponto de exclamação ou ponto de interrogação indica o fim de uma frase.  
* Seu programa deve imprimir como saída `"Grade X"` onde `X` é o nível de grau calculado pela fórmula de Coleman-Liau, arredondado para o inteiro mais próximo.  
* Se o número de índice resultante for 16 ou superior (equivalente ou superior a um nível de leitura de graduação sênior), seu programa deve imprimir `"Grade 16+"` em vez de fornecer o número de índice exato. Se o número do índice for menor que 1, seu programa deve imprimir `"Before Grade 1"`.  

## Obtendo entrada do usuário  

Vamos primeiro escrever algum código C que apenas receba uma entrada de texto do usuário e o imprima de volta. Especificamente, implemente em `readability.c` uma `main` função que solicite ao usuário `"Text: "` using `get_string` e, em seguida, imprima o mesmo texto usando `printf`. Certifique-se do `#include` e todos os arquivos de cabeçalho necessários.  

O programa deve se comportar de acordo com o abaixo.  

```
$ ./readability
Text: In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.
In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.
```

## Cartas
Agora que você coletou a entrada do usuário, vamos começar a analisar essa entrada contando primeiro o número de letras no texto. Considere letras como caracteres alfabéticos maiúsculos ou minúsculos, não pontuação, dígitos ou outros símbolos.

Adicione a `readability.c`, abaixo de `main`, uma função chamada `count_letters` que recebe um argumento, a `string` de texto, e que retorna um `int`, o número de letras desse texto. Certifique-se de adicionar o protótipo da função também no topo do seu arquivo, para que ele `main` saiba como chamá-lo. As probabilidades são de que o protótipo deve se parecer com o abaixo:  

`int count_letters(string text)`

Em seguida, chame essa função `main` para que, em vez de imprimir o texto em si, seu programa agora imprima o número de letras no texto.  

O programa agora deve se comportar de acordo com o abaixo.  

```
$ ./readability
Text: Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?"
235 letters
```
### DICA

Declarado em `ctype.h` é uma função que você pode achar útil, por [manual.cs50.io](https://manual.cs50.io/). Se você usá-lo, certifique-se de incluir esse arquivo de cabeçalho no topo de seu próprio código!  

## Palavras
O índice Coleman-Liau se preocupa não apenas com o número de letras, mas também com o número de palavras em uma frase. Para o propósito deste problema, consideraremos qualquer sequência de caracteres separados por um espaço como uma palavra (portanto, uma palavra hifenizada como "sister-in-law"deve ser considerada uma palavra, não três).  

Adicione a `readability.c`, abaixo de `main`, uma função chamada `count_words`que recebe um argumento, a string de texto, e que retorna um `int`, o número de palavras nesse texto. Certifique-se de adicionar o protótipo da função também no topo do seu arquivo, para que `main`saiba como chamá-lo.   (Deixamos o protótipo para você!)  

Em seguida, chame essa função `main` para que seu programa também imprima o número de palavras no texto.  

Você pode supor que uma frase:  

* conterá pelo menos uma palavra;  
* não começará nem terminará com um espaço; e  
* não terá vários espaços seguidos.  

É claro que você pode tentar uma solução que tolere vários espaços entre as palavras ou, de fato, nenhuma palavra!  

O programa agora deve se comportar de acordo com o abaixo.  

```
$ ./readability
Text: It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
250 letters
55 words
```

## Frases
A última informação que preocupa a fórmula de Coleman-Liau, além do número de letras e palavras, é o número de sentenças. Determinar o número de sentenças pode ser surpreendentemente complicado. Você pode primeiro imaginar que uma frase é qualquer sequência de caracteres que termina com um ponto, mas é claro que as frases também podem terminar com um ponto de exclamação ou um ponto de interrogação. Mas é claro que nem todos os períodos significam necessariamente que a sentença acabou. Por exemplo, considere a frase abaixo.

Mr. and Mrs. Dursley, of number four Privet Drive, were proud to say that they were perfectly normal, thank you very much.
Esta é apenas uma única frase, mas há três pontos! Para este problema, vamos pedir que você ignore essa sutileza: você deve considerar qualquer sequência de caracteres que termine com a .ou a !ou ?a como uma frase (portanto, para a “frase” acima, você deve contá-la como três frases) . Na prática, a detecção de limites de sentença precisa ser um pouco mais inteligente para lidar com esses casos, mas não vamos nos preocupar com isso por enquanto.

Adicione a readability.c, abaixo main, uma função chamada count_sentencesque recebe um argumento, a stringde texto, e que retorna um int, o número de sentenças naquele texto. Certifique-se de adicionar o protótipo da função também no topo do seu arquivo, para que ele mainsaiba como chamá-lo. (Mais uma vez, deixamos o protótipo para você!)

Em seguida, chame essa função mainpara que seu programa também imprima o número de sentenças no texto.

O programa agora deve se comportar de acordo com o abaixo.

```
$ ./readability
Text: When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.
295 letters
70 words
3 sentences
```

## Juntando tudo
Agora é hora de juntar todas as peças! Lembre-se de que o índice de Coleman-Liau é calculado usando a fórmula:  


`index = 0.0588 * L - 0.296 * S - 15.8`  

onde `L` é o número médio de letras por 100 palavras no texto e Sé o número médio de frases por 100 palavras no texto.  

Modifique mainpara readability.cque, em vez de exibir o número de letras, palavras e frases, ele forneça (somente) o nível da série conforme definido pelo índice Coleman-Liau (por exemplo , "Grade 2"ou "Grade 8" or the like). Certifique-se de arredondar o número de índice resultante para o mais próximo int!  

### Dicas
Lembre-se que roundé declarado em math.h, por manual.cs50.io !
Lembre-se de que, ao dividir valores do tipo intem C, o resultado também será um int, com qualquer resto (ou seja, dígitos após a vírgula) descartado. Em outras palavras, o resultado será "truncado". Você pode querer lançar um ou mais valores floatantes de realizar a divisão ao calcular Le S!
Se o número de índice resultante for 16 ou superior (equivalente ou superior a um nível de leitura de graduação sênior), seu programa deve produzir "Grade 16+"em vez de produzir um número de índice exato. Se o número do índice for menor que 1, seu programa deve gerar "Before Grade 1".

# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 2 - Legibilidade](hhttps://www.youtube.com/watch?v=vTsVt_kDS2M)

&nbsp;

## Como testar seu código
Tente executar seu programa nos seguintes textos, para garantir que você veja o nível de série especificado. Certifique-se de copiar apenas o texto, sem espaços extras.

One fish. Two fish. Red fish. Blue fish.(antes da 1ª série)
Would you like them here or there? I would not like them here or there. I would not like them anywhere.(Grau 2)
Congratulations! Today is your day. You're off to Great Places! You're off and away!(Grau 3)
Harry Potter was a highly unusual boy in many ways. For one thing, he hated the summer holidays more than any other time of year. For another, he really wanted to do his homework, but was forced to do it in secret, in the dead of the night. And he also happened to be a wizard.(5ª série)
In my younger and more vulnerable years my father gave me some advice that I've been turning over in my mind ever since.(Nota 7)
Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do: once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, "and what is the use of a book," thought Alice "without pictures or conversation?"(8ª série)
When he was nearly thirteen, my brother Jem got his arm badly broken at the elbow. When it healed, and Jem's fears of never being able to play football were assuaged, he was seldom self-conscious about his injury. His left arm was somewhat shorter than his right; when he stood or walked, the back of his hand was at right angles to his body, his thumb parallel to his thigh.(8ª série)
There are more things in Heaven and Earth, Horatio, than are dreamt of in your philosophy.(nota 9)
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.(10ª série)
A large class of computational problems involve the determination of properties of graphs, digraphs, integers, arrays of integers, finite families of finite sets, boolean formulas and elements of other countable domains.(Grau 16+)  

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>
