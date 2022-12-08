<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Exercício 0: Hello](https://cs50.harvard.edu/x/2022/psets/1/hello/)   




1 - Entre no *Terminal* do VsCode CodeSpace: `Ctrl`+`'`  

2 - Crie uma pasta chamada *pset1* (Conjunto de Exercícios 1) ou o nome que preferir: `mkdir pset1`  

3 - Entre nessa pasta: `cd pset1`  

4 - Crie uma pasta chamada *hello* dentro da pasta *pset1* : `mkdir hello`  

5 - Entrar nessa pasta: `cd hello`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 1*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 1'`  
Seu prompt do terminal agora deve se parecer com o código: `hello/ $`

6 - Crie o arquivo *hello.c*: `code hello.c`  
OBS: Deve abrir automaticamente no editor de texto do seu espaço de código.   Assim que você salvar o arquivo com command-S (no macOS) ou control-S (no Windows), ele também deve aparecer no explorador do seu codespace.  

7 - No arquivo *hello.c* escreva seu primeiro programa digitando precisamente estas linhas em hello.c:  

```
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Observe como o VS Code adiciona “realce de sintaxe” (ou seja, cor) conforme você digita, embora a escolha de cores do VS Code possa diferir deste conjunto de problemas. Essas cores não são realmente salvas dentro do próprio arquivo; eles são apenas adicionados pelo VS Code para destacar determinada sintaxe. Se você não tivesse salvado o arquivo hello.c desde o início, o VS Code não saberia (pela extensão do nome do arquivo) que você está escrevendo código C, caso em que essas cores estariam ausentes.
 
8 - Compile seu programa:  
Antes de podermos executar o hello.c programa, lembre-se que devemos compilá-lo com um compilador, traduzindo-o do código-fonte para o código de máquina (ou seja, zeros e uns). Execute o comando abaixo para fazer exatamente isso:  
`make hello`

9 - Execute `ls` e você verá que não apenas *hello.c* foi listado como também *hello*  
Isso ocorre porque você traduziu o código-fonte *hello.c* em código de máquina *hello*.

10 - Execute o próprio código de máquina: `./hello`  
Deve aparecer: hello, world

11 - Teste seu código: `check50 cs50/problems/2022/x/hello`  

12 - Avalie o estilo do seu código: `style50 hello.c`  

13 - Envie seu código: `submit50 cs50/problems/2022/x/hello`  
depois digite: `yes`  

&nbsp;

Ver progresso no curso:  https://cs50.me/cs50x  

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>