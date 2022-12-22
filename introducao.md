<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>

# Índice  

### 1 - CONFIGURANDO O AMBIENTE  

[Criando uma conta no GitHub](#criando-uma-conta-no-github)  

[Criando o Codespace](#criando-o-codespace)  

[Fazendo backup dos arquivos da IDE CS50 e Restaurando no codespace](#fazendo-backup-dos-arquivos-da-ide-cs50)

### 2 - FERRAMENTAS DE LINHA DE COMANDO  

[check50](#check50)

[cli50](#cli50)

[compare50](#compare50)

[debug50](#debug50)  

[help50](#help50)  

[render50](#render50)

[style50](#style50)

[submit50](submit50)

### 3 - LINHAS BÁSICAS DE COMANDO

[include](#include)  

[A biblioteca stdio.h](#a-biblioteca-stdioh)

[A biblioteca cs50.h](#a-biblioteca-cs50h)

[make](#make)

[clang](#clang)

[./](#-./)  

[Tipos de dados](#tipos-de-dados)

[Operadores, limitações, truncamento](#operadores-limitações-truncamento)

[Nome de caracteres especiais](#nome-de-caracteres-especiais)

[Linguagem C - Style Guide](#linguagem-c---style-guide)

------------
  
# 1 - CONFIGURANDO O AMBIENTE

## Criando uma conta no GitHub

## <img src="assets/youtube.svg" width=20 /> [CC50: Como criar sua Conta no GitHub?](https://www.youtube.com/watch?v=UHARV0Y3r3A) 

[Voltar ao Índice](#índice)

<br>

## Criando o Codespace
<p>A versão mais recentede do Curso de Ciência da Computação de Harvard(2022) mudou o ambiente de desenvolvimento, também conhecido como IDE CS50 para o VS CODE CS50 (codespace). Se você tem familiaridade com o VS CODE ou gostaria de migrar para o novo IDE do CS50, siga as instruções desse vídeo, nele iremos apresentar o VS CODE CS50 e como ativá-lo, também testamos aquele exercício do "hello world" e "hello [nome]".</p>

## <img src="assets/youtube.svg" width=20 /> [[CC50] Do CS50 IDE para VS CODE CS50](https://www.youtube.com/watch?v=WDmW6LSnpIQ) 

***Dica de ouro***: após os passos acima, dê uma olhadinha na sua caixa de entrada e verifique se há algum e-mail do bot do CS50 pedindo alguma autorização!!! 

[Voltar ao Índice](#índice)

<br>

## Fazendo backup dos arquivos da IDE CS50: 
🙋 🙋‍♂️ Eu tenho uma dúvida: se migrarmos do CS50 IDE para o VS CODE CS50 iremos perder todos os arquivos criados?
A resposta é não, você não irá perder seus arquivos. Entretanto, para não perder seus arquivos é necessário fazer os passos abaixo:
## <img src="assets/youtube.svg" width=20 /> [[CC50] Migrando os arquivos do CS50 IDE para VS CODE CS50](https://www.youtube.com/watch?v=8CpJVgTViO4)  

[Voltar ao Índice](#índice)

<br>

# 2 - FERRAMENTAS DE LINHA DE COMANDO

## check50

Para instalar: `pip install check50`  

`check50` - Irá verificar a exatidão do nosso código com alguns testes automatizados.  
Obs: *Tem que executar o comando dentro da pasta onde está o arquivo.*  
Exemplo: `check50 cs50/problems/2022/x/mario/more`  

![image](https://user-images.githubusercontent.com/41968938/207944538-d14dad6a-8308-4b8f-ab30-5dcba765228f.png)

[Voltar ao Índice](#índice)

## cli50

Para instalar: `pip3 install cli50` 

Com o `cli50` você pode montar um diretório dentro de um container executando cs50/cli, uma imagem do Docker baseada no Ubuntu 20.04, uma distribuição popular do Linux.  
 
[Voltar ao Índice](#índice)

## compare50

Para instalar: `pip install compare50`  

`compare50` é uma ferramenta para detectar similaridade no código que suporta bem mais de 300 linguagens de programação e modelagem. A ferramenta em si é de código aberto e, por design, extensível em seus métodos de comparação. Não há necessidade de fazer upload de código para um host externo, compare50 é executado localmente a partir da linha de comando. Como uma ferramenta local, compare50 apresenta suas descobertas em arquivos HTML estáticos e interativos que permitem o compartilhamento fácil. E faz isso incrivelmente rápido, comparando facilmente milhares de arquivos de origem em segundos.

[Voltar ao Índice](#índice)

## debug50

Depuração  
* Este depurador já está embutido no VsCode. 

`debug50` - Debug significa executar o código passo a passo em uma ferramenta de depuração, para localizar o ponto exato em que você cometeu um erro de programação.  

Exemplo de execução do debug50:  
`debug50 ./buggy`  

### Caso ocorra erro:  
```
Can't debug this program! Are you sure you're running debug50 on an executable, a Python script, or a Java program? Unsupported File: nomedoarquivo
```  

[Solução AQUI](https://patyfil.github.io/cs50-cc50-harvard/debug50)  

[Voltar ao Índice](#índice)

## help50

Ajuda  

`help50` - É um comando que podemos executar para explicar problemas em nosso código de uma forma mais amigável.  
Podemos executá-lo adicionando help50 à frente de um comando que estamos tentando.  
Exemplo: `help50 make hello`  
<br>
quando está correto:  

![image](https://user-images.githubusercontent.com/41968938/207945405-b71b0308-9e24-4a06-9f75-a72608b9ea28.png)  

<br>
quando tem erro:  

![image](https://user-images.githubusercontent.com/41968938/207945954-39dc5025-ef80-4e6d-bc24-ce5adb069241.png)  

[Voltar ao Índice](#índice)

## render50

`render50` Gerar PDFs de código-fonte realçados pela sintaxe.

[Voltar ao Índice](#índice)

## style50
Sugestões de correções  

`style50` - Para ver sugestões de novas linhas e recuo.  
Exemplo: `style50 hello.c`  

![image](https://user-images.githubusercontent.com/41968938/207945269-1ba46843-11f1-454e-a5a1-96c985f649b9.png)  

[Voltar ao Índice](#índice)

## submit50

É baseado em git, um “sistema de controle de versão distribuído” que permite salvar diferentes versões de arquivos sem ter que dar a cada versão um nome de arquivo exclusivo (como você costuma fazer em seu próprio Mac ou PC!). Por meio submit50e, por sua vez, gitvocê pode enviar o trabalho várias vezes (ou seja, várias versões do mesmo).  

Quando você executa submit50, seus arquivos são “enviados” (ou seja, carregados) para a “organização” do CS50 (também chamada de “submit50”) no GitHub  

Para enviar seu código: `submit50 cs50/problems/2022/x/credit` depois digite: `yes`  

[Voltar ao Índice](#índice)

<br>

# OUTROS COMANDOS

## include

Para importar Bibliotecas:  
```
#include <...> Inclui cabeçalho de biblioteca
#include <cs50.h> Funções do CS50;
#include <stdio.h> Funções de entrada/saída
#include <math.h> Funções matemáticas
```  

## Funções da Biblioteca CS50 <cs50.h>  
E a biblioteca CS50 tem funções correspondentes para obter entrada de vários tipos:  
`get_char`  - solicita ao usuário um char  
`get_double` - solicita ao usuário um double  
`get_float` - solicita ao usuário um float  
`get_int` - solicita ao usuário um int  
`get_long` - solicita ao usuário um long  
`get_string` - solicita ao usuário um string  
 
Exemplo:  
```string nome = get_string("Qual é seu nome? \n");```

<br> 

## Funções da biblioteca stdio.h
`fclose` - fecha um arquivo  
`fopen` - abre um arquivo  
`fprintf` - imprimir em um arquivo  
`fread` - lê bytes de um arquivo  
`fscanf` - obtém entrada de um arquivo  
`fwrite` - escreve bytes em um arquivo  
`printf` - imprimir na tela  
`scanf` - obtém entrada de um usuário  
`sprintf` - imprimir em uma string  

### Códigos de Formato para o `printf`  
Para printf, também, existem diferentes marcadores de posição para cada tipo:  
`%c`  para caracteres  
`%f`  para flutuadores, duplos  
`%i`  para ints  
`%li` para longos  
`%s`  para strings  

Exemplo:  
`printf("olá,%s \n" ,nome);`

[Outras bibliotecas no manual do CS50](https://manual.cs50.io/)  

[Voltar ao Índice](#índice)

## make

### ***Compilar*** o arquivo que criamos: `make hello`  

`make` é um programa que chama o compilador "clang". Converte o código-fonte em código de máquina.  

[Voltar ao Índice](#índice)

## clang
***Para usar direto o compilador `clang`:***  

Executamos o comando: `clang hello.c` que tem como arquivo de saída com nome padrão: `a.out`  
obs: Esse comando não funciona se tiver a biblioteca do CS50.  

Para ter como saída um arquivo com nome específico, usamos o comando: `clang -o hello hello.c` Arquivo de saída: `hello`  
`-o` "saída". Renomeia o arquivo final, ou seja, argumento de linha de comando, que permite especificar, explicitamente, como você deseja que seu programa de saída seja chamado.  

Código-fonte: `hello.c`  
Código de Máquina: `hello`  

Se quisermos usar a biblioteca do CS50, via `#include <cs50.h>`, para a função `get_string` ou outra função dessa biblioteca, também temos que adicionar um sinalizador: `clang -o hello hello.c -lcs50`  

O sinalizador `-l` vincula o arquivo `cs50` , que já está instalado no CS50 IDE, e inclui o código de máquina para `get_string` (entre outras funções) que nosso programa pode consultar e usar também.  

Com o `make`, esses argumentos são gerados para nós, uma vez que a equipe também configurou o `make` no IDE CS50.  

[Voltar ao Índice](#índice)

<br>

### Criar uma pasta:  `mkdir pasta`  

### Criar arquivo: `code arquivo`  

### Entrar em uma pasta: `cd pasta`  

### O caractere (.) é um atalho que representa o diretório atual.  
Exemplo: `cd .`   

### O caractere (..) é um atalho que representa o diretório acima do diretório atual.  
Exemplo: `cd ..`   

### ***Mudar*** para o diretório que está dois níveis acima do diretório atual: 
Exemplo: `cd ../../`    

### ***Voltar*** para o diretório raiz: `cd`  

### ***Lista*** arquivos ou pastas que estão dentro do diretório: `ls`  

### ***Limpar*** a tela: Aperte as teclas `Ctrl`+`L`  

### ./

### ***Executar*** o arquivo compilado, exemplo: `./hello`  

### ***Remove*** um arquivo, pedindo confirmação: `rm`  
Exemplo: `rm hello.txt`    

Mensagem de confirmação: Você realmente deseja remover o arquivo 'hello.txt'?
sua resposta deve ser: `y` ou `yes` 

### ***Remove*** um ***arquivo***, SEM confirmação: `rm -f`  
Exemplo: `rm -f hello.txt`    

### ***Remove*** um ***diretório*** inteiro, pedindo confirmação `rm -r`  
Exemplo: `rm -r pset2`    
Mensagem de confirmação: Você realmente deseja remover o diretório 'pset'? `y`  

### ***Remove*** um ***diretório*** inteiro, SEM confirmação `rm -r`  
Exemplo: `rm -rf pset2`    

### ***Mover*** e ***Renomear*** um arquivo de um local para outro, da origem para o destino: 
Exemplo: `mv greedy.c greddy.c`  

### ***Copiar*** e ***Renomear*** um ***arquivo***: cp
Exemplo: `cp hello.txt hi.txt`  
`cp <nome do arquivo de origem> <nome do arquivo destino>`

### ***Copiar*** um ***diretório com seu conteúdo***: cp -r
Exemplo: `cp -r pset0 pset3`  
`cp <nome do diretório de origem> <nome do diretório destino>`

### Diretório de trabalho atual: ```pwd```  

### `chmod`

### `rmdir`

### `sudo`

### `ln`

### `man`

### `clear`

### `touch`

### `diff`

### `telnet`

<br> 

# Linguagem C - Style Guide

## [Style Guide for C](https://cs50.readthedocs.io/style/c/)  

<br>  

```c
#include <stdio.h>  

int main(void)   
{  
    printf("olá, mundo");   
}
```

## Tipos de dados
Existem muitos tipos de dados que podemos usar para nossas variáveis, que indicam ao computador que tipo de dados eles representam:  
`bool`  uma expressão booleana verdadeira ou falsa  
`char`  um único caractere ASCII como a ou 2  
`double`  um valor de vírgula flutuante com mais dígitos do que um float  
`float`  um valor de vírgula flutuante ou número real com um valor decimal  
`int`  inteiros até um certo tamanho ou número de bits  
`long`  inteiros com mais bits, para que possam contar mais do que um int  
`string`  uma linha de caracteres  

## Operadores, limitações, truncamento
Existem vários operadores matemáticos que podemos usar também:  
`+`   para adição  
`-`   para subtração  
`*`   para multiplicação  
`/`   para divisão  
`%`   para calcular o resto  

## Nome de caracteres especiais
`\`   backslash (barra invertida)  
``` ` ``` backtick (crase)  
`*`   asterisk (asterisco)  
`_`   underscore  
`{}`  curly braces (chaves)  
`[]`  square brackets (colchetes)   
`()`  parentheses (parênteses)  
`#`   hash mark (sustenido / hash / jogo da velha)  
`+`   plus sign (sinal de "mais" ou somar)  
`-`   minus sign (hyphen) (sinal de menos ou hífen)  
`.`   dot (ponto)  
`!`   exclamation mark (ponto de exclamação)  

[Voltar ao Índice](#índice)

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
