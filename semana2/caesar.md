<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>

# [Exercício 2 - Caesar (César)](https://cs50.harvard.edu/x/2023/psets/2/caesar/)

Você implementará um programa que criptografa mensagens usando a cifra de César, conforme abaixo:

```
$ ./caesar 13
plaintext:  HELLO
ciphertext: URYYB
```
**Lembre-se que *plaintext* significa texto simples e *ciphertext* é o texto cifrado!**   

# Começando:

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset2`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 2*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 2'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/2/caesar.zip`  
seguido de *ENTER* para baixar o zip [caesar.zip](../assets/ArquivosZips/semana2/caesar.zip) que contem a pasta *caesar* com o arquivo em C.  

4 - Execute o unzip: `unzip caesar.zip` para extrair a pasta *caesar* dentro da pasta *pset2*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm caesar.zip`  

6 - Agora entre na pasta: `cd caesar`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *caesar.c*  
A execução `code caesar.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *caesar.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2023/x/caesar`;  

10 - Avalie o estilo do seu código: `style50 caesar.c`;  

11 - Envie seu código: `submit50 cs50/problems/2023/x/caesar` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# Introdução ao Exercício 
Supostamente, César (sim, aquele César) costumava “criptografar” (ou seja, ocultar de forma reversível) mensagens confidenciais, deslocando cada letra nelas por um certo número de casas. Por exemplo, ele pode escrever A como B, B como C, C como D, ..., e, em ordem alfabética, Z como A. E assim, para dizer `HELLO` para alguém, Caesar pode escrever `IFMMP`. Ao receber tais mensagens de César, os destinatários teriam que “descriptografá-las” deslocando as letras na direção oposta pelo mesmo número de casas.

O sigilo desse “criptosistema” dependia apenas de César e os destinatários conhecerem um segredo, o número de lugares pelos quais César havia trocado suas cartas (por exemplo, 1). Não é particularmente seguro pelos padrões modernos, mas, ei, se você talvez seja o primeiro no mundo a fazer isso, bastante seguro!

O texto não criptografado é geralmente chamado de texto simples ou sem formatação. O texto criptografado é geralmente chamado de texto cifrado. E o segredo usado é chamado de chave.

Para ser claro, então, veja como criptografar **HELLO** com uma chave de 1, que resulta em IFMMP:  

| plaintext (texto simples)    | `H` | `E` | `L` | `L` | `O` |
|--------------|:---:|:---:|:---:|:---:|:---:|
| + key (chave)                | 1 | 1 | 1 | 1 | 1 |
| = ciphertext (texto cifrado) | `I` | `F` | `M` | `M` | `P` |

Mais formalmente, o algoritmo de César (ou seja, cifra) criptografa as mensagens “girando” cada letra em `k` posições. Mais formalmente, se `p` é algum texto simples (ou seja, uma mensagem não criptografada), `pi` é o `i^{th}` (i-ésimo) caractere em `p`, e `k` é uma chave secreta (ou seja, um número inteiro não negativo), então cada letra, `ci` , no texto cifrado, `c` , é calculado como:

`ci = (pi + k) % 26`

em que `%26` aqui significa “resto ao dividir por 26”. Essa fórmula talvez faça a cifra parecer mais complicada do que é, mas é apenas uma maneira concisa de expressar o algoritmo com precisão. De fato, para fins de discussão, pense em A (ou a) como `0`, B (ou b) como `1`, ..., H (ou h) como `7`, I (ou i) como `8`, ..., e Z (ou z) como `25`.   

Suponha que César apenas queira dizer `Hi` a alguém confidencialmente usando, desta vez, uma chave, `k`, de 3. E assim seu texto simples, `p`, é `Hi`, caso em que o primeiro caractere de seu texto simples, `p0`, é `H` (também conhecido como 7), e o segundo caractere de seu texto simples, `p1`, é `i` (conhecido como 8). O primeiro caractere de seu texto cifrado, `c0`, é portanto `K`, e o segundo caractere de seu texto cifrado, `c1`, é igual a `L`.  
```
k = Chave = 3
p = Texto Simples = Hi
p0 = H = 7
p1 = i = 8
c = Texto Cifrado = kl
c0 = K
c1 = L
```
Faz sentido?  

Vamos escrever um programa chamado `caesar` que permite criptografar mensagens usando a cifra de César. No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, qual deve ser a chave na mensagem secreta que fornecerá em tempo de execução. Não devemos necessariamente presumir que a chave do usuário será um número; embora você possa presumir que, se for um número, será um número inteiro positivo.  

Aqui estão alguns exemplos de como o programa pode funcionar. Por exemplo, se o usuário inserir uma chave `1` e um texto simples de `HELLO`:  

```
$ ./caesar 1
plaintext:  HELLO
ciphertext: IFMMP
```

Veja como o programa pode funcionar se o usuário fornecer uma chave `13` e um texto simples de `hello, world`:

```
$ ./caesar 13
plaintext:  hello, world
ciphertext: uryyb, jbeyq
```
Observe que nem a vírgula nem o espaço foram “deslocados” pela cifra. Gire apenas caracteres alfabéticos!

Que tal mais um? Veja como o programa pode funcionar se o usuário fornecer uma chave de `13` novamente, com um texto simples mais complexo:

```
$ ./caesar 13
plaintext:  be sure to drink your Ovaltine
ciphertext: or fher gb qevax lbhe Binygvar
```

Observe que o caso da mensagem original foi preservado. Letras minúsculas permanecem minúsculas e letras maiúsculas permanecem maiúsculas.

E se um usuário não cooperar, fornecendo um argumento de linha de comando que não seja um número? O programa deve lembrar ao usuário como usar o programa:

```
$ ./caesar HELLO
Usage: ./caesar key
```

Ou realmente não coopera, não fornecendo nenhum argumento de linha de comando? O programa deve lembrar ao usuário como usar o programa:

```
$ ./caesar
Usage: ./caesar key
```

Ou realmente, realmente não coopera, fornecendo mais de um argumento de linha de comando? O programa deve lembrar ao usuário como usar o programa:

```
$ ./caesar 1 2 3
Usage: ./caesar key
```

## Por quê?  
## <img src="../assets/youtube.svg" width=20 />  [Christmas Story](https://www.youtube.com/watch?v=9K4FsAHB-C8&t=1s)  

## TENTE
Para experimentar a implementação deste problema pela equipe, execute

`./caesar key`
dentro [desta sandbox](https://bit.ly/2Vwi8n0) , substituindo um inteiro válido no lugar de `key`.


## Especificação

Projete e implemente um programa, caesar, que criptografa mensagens usando a cifra de César.

* Implemente seu programa em um arquivo chamado `caesar.c` em um diretório chamado `caesar`.  
* Seu programa deve aceitar um único argumento de linha de comando, um inteiro não negativo. Vamos chamá-lo de `k` para fins de discussão.  
* Se seu programa for executado sem nenhum argumento de linha de comando ou com mais de um argumento de linha de comando, seu programa deve imprimir uma mensagem de erro de sua escolha (com `printf`) e retornar de `main` um valor de `1`(que tende a significar um erro) imediatamente.
* Se algum dos caracteres do argumento da linha de comando não for um dígito decimal, seu programa deve imprimir a mensagem `Usage: ./caesar key` e retornar de `main` um valor de `1`.
* Não assuma que `k` será menor ou igual a 26. Seu programa deve funcionar para todos os valores integrais não negativos de `2^{31} - 26`. Em outras palavras, você não precisa se preocupar se seu programa eventualmente quebrar se o usuário escolher um valor para `k` isso é muito grande ou quase grande demais para caber em um arquivo `int`. (Lembre-se de que uma `int` pode transbordar.) Mas, mesmo que `k` é melhor que `26`, os caracteres alfabéticos na entrada do seu programa devem permanecer como caracteres alfabéticos na saída do seu programa. Por exemplo, se `k` é `27`, `A` não deve se tornar `\` mesmo que `\` 27 seja posições fora do `A` ASCII, por [asciichart.com](https://www.asciichart.com/); `A` deve se tornar `B`, já que `B` é `27` posições distantes de `A`, desde que você passe de `Z` para `A`.  
* Seu programa deve produzir `plaintext: ` (com dois espaços, mas sem uma nova linha) e, em seguida, solicitar ao usuário um `string` de texto simples (usando `get_string`).
* Seu programa deve produzir `ciphertext: ` (com um espaço, mas sem uma nova linha) seguido pelo texto cifrado correspondente do texto simples, com cada caractere alfabético no texto simples “rodado” por *k* posições; caracteres não alfabéticos devem ser exibidos inalterados.
* Seu programa deve preservar maiúsculas e minúsculas: letras maiúsculas, embora iteradas, devem permanecer letras maiúsculas; letras minúsculas, embora iteradas, devem permanecer letras minúsculas.
Depois de enviar o texto cifrado, você deve imprimir uma nova linha. Seu programa deve sair retornando `0` de `main`.  

## Adendo
Como começar? Vamos abordar esse problema um passo de cada vez.

## Pseudo-código
Primeiro escreva, tente escrever uma `main` função `caesar.c` que implemente o programa usando apenas pseudocódigo, mesmo que não (ainda!) tenha certeza de como escrevê-lo no código real.

## DICA
Há mais de uma maneira de fazer isso, então aqui está apenas uma!

```c
int main(void)
{
      // 1 - Certifique-se de que o programa foi executado com apenas um argumento de linha de comando;

      // 2 - Certifique-se de que todos os caracteres em argv[1] sejam dígitos; 

      // 3 - Converta o argumento da linha de comando argv[1] de `string` para `int`;

      // 4 - Solicita ao usuário texto sem formatação (plaintext:);

      // 5 - Ver quantas letras tem no texto e salvar em uma variável "length"  

      // 6 - Crie uma matriz de letras cifradas e percorra todas as letras dessa matriz.
         // Função para cifrar o texto simples (retornando o texto cifrado "c")
         // 6.1 - Para cada caractere no texto simples (plaintext:) repita/itere:
         // 6.2 - Verificar se é uma letra maiúscula ou minúscula, itere-a, preservando capitalização, e então imprima o caractere iterado.
         // 6.3 - Se não for uma letra, imprima o caractere como digitado, ou seja, o texto simples (retorne "p");

      // 7 - Imprima uma nova linha. 
}
```

Não há problema em editar seu próprio pseudocódigo depois de ver o nosso aqui, mas não basta copiar/colar o nosso no seu!

### Contando argumentos de linha de comando
Seja qual for o seu pseudocódigo, vamos primeiro escrever apenas o código C que verifica se o programa foi executado com um único argumento de linha de comando antes de adicionar funcionalidades adicionais.

Especificamente, modifique `main` de `caesar.c` de forma que, se o usuário não fornecer nenhum argumento de linha de comando, ou dois ou mais, a função imprima `"Usage: ./caesar key\n"` e então retorne `1`, saindo efetivamente do programa.  
Se o usuário fornecer exatamente um argumento de linha de comando, o programa não deve imprimir nada e simplesmente retornar `0`.  
O programa deve, portanto, se comportar de acordo com o abaixo:

```
$ ./caesar
Usage: ./caesar key
```

```
$ ./caesar 1 2 3
Usage: ./caesar key
```

```
$ ./caesar 1
```

## Dicas

* Lembre-se de que você pode imprimir com `printf`.
* Lembre-se de que uma função pode retornar um valor com  `return`.
* Lembre-se de que `argc` contém o número de argumentos de linha de comando passados ​​para um programa, mais o próprio nome do programa.

## Verificando a chave
Agora que seu programa está (espero!) aceitando a entrada conforme prescrito, é hora de outra etapa.

Adicione a `caesar.c`, abaixo de `main`, uma função chamada, por exemplo, `only_digits` que recebe uma `string` como argumento e retorna `true` se essa `string` contiver apenas dígitos de `0` a `9`, senão retorna `false`. Certifique-se de adicionar o protótipo da função acima de `main` também.

## Dicas
* É provável que você queira um protótipo como:
  ```c
  bool only_digits(string s);
  ```
  E certifique-se de incluir `cs50.h` no topo do seu arquivo, para que o compilador reconheça `string` (e `bool`).

* Lembre-se de que a `string` é apenas uma matriz de `char`s.
* Lembre-se que `strlen`, declarado em `string.h`, calcula o comprimento de uma `string`.
* Você pode achar `isdigit`, declarado em `ctype.h`, útil, por [manual.cs50.io](https://manual.cs50.io/). Mas observe que ele verifica apenas um  `char` de cada vez!

&nbsp;

Em seguida, modifique `main` de forma que ele chame `only_digits` em `argv[1]`.  
Se essa função retornar `false`, então `main` deve imprimir `"Usage: ./caesar key\n"` e retornar `1`.  
Senão `main` deve simplesmente retornar `0`.  
O programa deve, portanto, se comportar de acordo com o abaixo:  

```
$ ./caesar 42
```

```
$ ./caesar banana
Usage: ./caesar key
```
## Usando a chave  

Agora modifique `main` de forma que ele converta `argv[1]` em um arquivo `int`. Você pode achar `atoi`, declarado em `stdlib.h`, útil, pelo [manual.cs50.io](https://manual.cs50.io/). E, em seguida, use `get_string` para solicitar ao usuário algum texto sem formatação com `"plaintext: "`.

Em seguida, implemente uma função chamada, por exemplo, `rotate`, que recebe um `char` como entrada e também um `int`, e itera `char` por tantas posições se for uma letra (ou seja, alfabética), passando de `Z` para `A`(e de `z` para `a`) conforme necessário. Se `char` não for uma letra, a função deve retornar o mesmo `char` inalterado.

## Dicas  

* É provável que você queira um protótipo como:
  ```c
  char rotate(char c, int n);
  ```
  Uma chamada de função como
  ```c
  rotate('A', 1)
  ```
  ou mesmo
  ```
  rotate('A', 27)
  ```
  deve, portanto, retornar `'B'`. E uma chamada de função como.
  ```c
  rotate('!', 13)
  ```
  deveria retornar `'!'`.  

* Lembre-se de que você pode explicitamente “transformar” uma `char` em uma `int` com `(char)`, e uma `int` em uma `char` com `(int)`. Ou você pode fazer isso implicitamente simplesmente tratando um como o outro.
* É provável que você queira subtrair o valor ASCII de `'A'` qualquer letra maiúscula, de modo a tratá- la `'A'` como `0`, `'B'` como `1`, e assim por diante, durante a execução da aritmética. E, em seguida, adicione-o novamente quando terminar com o mesmo.
* É provável que você queira subtrair o valor ASCII de `'a'` qualquer letra minúscula, de modo a tratar `'a'` como `0`, `'b'` como `1`, e assim por diante, enquanto executa aritmética. E, em seguida, adicione-o novamente quando terminar com o mesmo.
* Você pode achar algumas outras funções declaradas `ctype.h` úteis, por <https://manual.cs50.io/>.
* É provável que você ache `%` útil quando "envolver" aritmeticamente de um valor como `25` para `0`.  

&nbsp;

Em seguida, modifique `main` de forma que imprima `"ciphertext: "` e itere sobre cada `char` no texto simples do usuário, chamando `rotate` cada um e imprimindo o valor de retorno deles.

## Dicas  

* Lembre-se de que `printf` pode imprimir um `char` usando `%c`.
* Se você não está vendo nenhuma saída ao chamar `printf`, é provável que seja porque você está imprimindo caracteres fora do intervalo ASCII válido de 0 a 127. Tente imprimir caracteres temporariamente como números (usando `%i` em vez de `%c`) para ver quais valores você está imprimindo!

![02 - Caesar](https://user-images.githubusercontent.com/41968938/210101404-ab391614-78f4-42ff-9f29-c1716a92fb14.jpg)


## Passo a passo
# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 2 - César](https://www.youtube.com/watch?v=82pMEmDMnxI)

&nbsp;


<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>
