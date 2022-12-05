<p align="right">
   <a href="https://patyfil.github.io/CS50-CC50-Harvard/">Voltar ao README</a>
</p>

# Principais códigos que serão utilizados na IDE CS50 ou CodeSpace VsCode

Para importar a Biblioteca do CS50:
```
#include <cs50.h>
``` 

`check50` - Irá verificar a exatidão do nosso código com alguns testes automatizados.  
Obs: *Tem que executar o comando dentro da pasta onde está o arquivo.*  
Exemplo:
```
check50 cs50/problems/2021/x/mario/more
```

`help50` - É um comando que podemos executar para explicar problemas em nosso código de uma forma mais amigável.   
Podemos executá-lo adicionando help50 à frente de um comando que estamos tentando, exemplo: help50 make hello  
```
help50 make hello 
```

`style50` - Para ver sugestões de novas linhas e recuo.
```
style50 hello.c
```

## Linhas de comando básicas para usar no Terminal do VsCode - na IDE CS50 ou CodeSpace:
### Criar uma pasta:
```mkdir pasta```

### Criar arquivo:
```code arquivo```

### Entrar em uma pasta
```cd pasta```

### Compilar o arquivo que criamos
```make hello```

### Executar o arquivo compilado
```./hello```


# [Style Guide for C](https://cs50.readthedocs.io/style/c/)

# Linguagem C:
```
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
   <a href="https://patyfil.github.io/CS50-CC50-Harvard/">Voltar ao README</a>
</p>
