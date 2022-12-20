<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>

# Configurando o ambiente

## Criando uma conta no GitHub:
## <img src="assets/youtube.svg" width=20 /> [CC50: Como criar sua Conta no GitHub?](https://www.youtube.com/watch?v=UHARV0Y3r3A) 

<br>

## Criando o Codespace:  
<p>A versão mais recentede do Curso de Ciência da Computação de Harvard(2022) mudou o ambiente de desenvolvimento, também conhecido como IDE CS50 para o VS CODE CS50 (codespace). Se você tem familiaridade com o VS CODE ou gostaria de migrar para o novo IDE do CS50, siga as instruções desse vídeo, nele iremos apresentar o VS CODE CS50 e como ativá-lo, também testamos aquele exercício do "hello world" e "hello [nome]".</p>

## <img src="assets/youtube.svg" width=20 /> [[CC50] Do CS50 IDE para VS CODE CS50](https://www.youtube.com/watch?v=WDmW6LSnpIQ) 

***Dica de ouro***: após os passos acima, dê uma olhadinha na sua caixa de entrada e verifique se há algum e-mail do bot do CS50 pedindo alguma autorização!!! 

<br>

## Fazendo backup dos arquivos da IDE CS50: 
🙋 🙋‍♂️ Eu tenho uma dúvida: se migrarmos do CS50 IDE para o VS CODE CS50 iremos perder todos os arquivos criados?
A resposta é não, você não irá perder seus arquivos. Entretanto, para não perder seus arquivos é necessário fazer os passos abaixo:
## <img src="assets/youtube.svg" width=20 /> [[CC50] Migrando os arquivos do CS50 IDE para VS CODE CS50](https://www.youtube.com/watch?v=8CpJVgTViO4)  

<br>

# Principais códigos que serão utilizados na IDE CS50 ou CodeSpace VsCode  

Para importar Bibliotecas:  
```
#include <...> Inclui cabeçalho de biblioteca
#include <cs50.h> Funções do CS50;
#include <stdio.h> Funções de entrada/saída
#include <math.h> Funções matemáticas
```  

### ***Compilar*** o arquivo que criamos: ```make hello```  
Executa o Comando "clang". Converte o código-fonte em código de máquina.  
Para usar direto o comando ```clang```:  
```clang hello.c``` Saída: ```a.out```  
```clang -o hello hello.c``` Saída: ```hello```  
```-o``` "saída". Renomeia o arquivo final, ou seja, argumento de linha de comando, que permite especificar, explicitamente, como você deseja que seu programa de saída seja chamado.
Código-fonte: ```hello.c```
Código de Máquina: ```hello```

### ***Executar*** o arquivo compilado: ```./hello```  

`check50` - Irá verificar a exatidão do nosso código com alguns testes automatizados.  
Obs: *Tem que executar o comando dentro da pasta onde está o arquivo.*  
Exemplo: ```check50 cs50/problems/2022/x/mario/more```  

![image](https://user-images.githubusercontent.com/41968938/207944538-d14dad6a-8308-4b8f-ab30-5dcba765228f.png)


`help50` - É um comando que podemos executar para explicar problemas em nosso código de uma forma mais amigável.  
Podemos executá-lo adicionando help50 à frente de um comando que estamos tentando.  
Exemplo: ```help50 make hello```  
quando está correto:  

![image](https://user-images.githubusercontent.com/41968938/207945405-b71b0308-9e24-4a06-9f75-a72608b9ea28.png)  
quando tem erro:  

![image](https://user-images.githubusercontent.com/41968938/207945954-39dc5025-ef80-4e6d-bc24-ce5adb069241.png)  


`style50` - Para ver sugestões de novas linhas e recuo.  
Exemplo: ```style50 hello.c```  

![image](https://user-images.githubusercontent.com/41968938/207945269-1ba46843-11f1-454e-a5a1-96c985f649b9.png)  


`debug50` - Debug/Depuração significa executar o código passo a passo em uma ferramenta de depuração, para localizar o ponto exato em que você cometeu um erro de programação.  

Exemplo de execução do debug50:  
`debug50 ./buggy`

Caso ocorra erro:  
``` Can't debug this program! Are you sure you're running debug50 on an executable or a Python script? ```  
[Solução AQUI](https://patyfil.github.io/cs50-cc50-harvard/debug50)

# Linhas de comando básicas para usar no Terminal do VsCode - na IDE CS50 ou CodeSpace:  

### Criar uma pasta:  ```mkdir pasta```  

### Criar arquivo: ```code arquivo```  

### Entrar em uma pasta: ```cd pasta```  

### O caractere (.) é um atalho que representa o diretório atual.  
Exemplo: ```cd .```  

### O caractere (..) é um atalho que representa o diretório acima do diretório atual.  
Exemplo: ```cd ..```   

### ***Mudar*** para o diretório que está dois níveis acima do diretório atual: 
Exemplo: ```cd ../../```  

### ***Voltar*** para o diretório raiz: ```cd```  

### ***Lista*** arquivos ou pastas que estão dentro do diretório: ```ls```  

### ***Limpar*** a tela: Aperte as teclas ```Ctrl```+```L```  

### ***Remove*** um arquivo, pedindo confirmação: ```rm```  
Exemplo: ```rm hello.txt```    

Mensagem de confirmação: Você realmente deseja remover o arquivo 'hello.txt'?
sua resposta deve ser: ```y``` ou ```yes``` 

### ***Remove*** um ***arquivo***, SEM confirmação: ```rm -f```  
Exemplo: ```rm -f hello.txt```    

### ***Remove*** um ***diretório*** inteiro, pedindo confirmação ```rm -r```  
Exemplo: ```rm -r pset2```    
Mensagem de confirmação: Você realmente deseja remover o diretório 'pset'? ```y```  

### ***Remove*** um ***diretório*** inteiro, SEM confirmação ```rm -r```  
Exemplo: ```rm -rf pset2```    

### ***Mover*** e ***Renomear*** um arquivo de um local para outro, da origem para o destino: 
Exemplo: ```mv greedy.c greddy.c```  

### ***Copiar*** e ***Renomear*** um ***arquivo***: cp
Exemplo: ```cp hello.txt hi.txt```  
```cp <nome do arquivo de origem> <nome do arquivo destino>```

### ***Copiar*** um ***diretório com seu conteúdo***: cp -r
Exemplo: ```cp -r pset0 pset3```  
```cp <nome do diretório de origem> <nome do diretório destino>```

### Diretório de trabalho atual: ```pwd```  

### ```chmod```

### ```rmdir```

### ```sudo```

### ```ln```

### ```man```

### ```clear```

### ```touch```

### ```diff```

### ```telnet```

<br> 

# Linguagem C:  

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

## Funções da Biblioteca CS50
E a biblioteca CS50 tem funções correspondentes para obter entrada de vários tipos:  
`get_char`  
`get_double`   
`get_float`   
`get_int`   
`get_long`   
`get_string`   

Exemplo:  
```string nome = get_string("Qual é seu nome? \n");```

## Códigos de Formato para o `printf`  
Para printf, também, existem diferentes marcadores de posição para cada tipo:  
`%c`  para caracteres  
`%f`  para flutuadores, duplos  
`%i`  para ints  
`%li` para longos  
`%s`  para strings  

Exemplo:  
```printf("olá,%s \n" ,nome);```


## Operadores, limitações, truncamento  
Existem vários operadores matemáticos que podemos usar também:  
`+`   para adição  
`-`   para subtração  
`*`   para multiplicação  
`/`   para divisão  
`%`   para calcular o resto  


## Nome de caracteres especiais:  
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



<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
