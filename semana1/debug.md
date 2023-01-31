<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Debug (Depurar)](https://cs50.harvard.edu/x/2023/problems/1/debug/)  

# Metas de aprendizagem
* Familiarize-se com a sintaxe C  
* Saiba o que significam as mensagens de erro do compilador C  
* Obter prática de depuração  

<img src="../assets/first_bug.jpg" />

# Fundo  

Existem dois tipos de erros que podem ocorrer ao escrever um programa. Os primeiros erros que você provavelmente encontrará são erros sintáticos . Além dos erros sintáticos, também podem ocorrer erros lógicos, que veremos em breve.  

Na ciência da computação, a sintaxe é importante para um computador entender o que você está dizendo para fazer. Cada linguagem de programação tem suas próprias regras sintáticas, que incluem a combinação de palavras e pontuação.  

Este laboratório começa com o código de distribuição que contém vários erros sintáticos. A ideia é tentar compilar ( make) o programa, aprender a interpretar as mensagens de erro bastante enigmáticas enviadas pelo compilador e depurar o programa.  

## dicas
* Você provavelmente verá que o primeiro erro após tentar compilar debug.cserá debug.c:9:5: error: use of undeclared identifier 'name'. O 9depois debug.c:significa que há um problema na linha 9. Por que você acha que diz undeclared identifier?  
* Você pode procurar erros como símbolos ausentes, bibliotecas ausentes, declarações de variáveis ​​ausentes.  
* Se você ainda estiver preso, tente digitar no terminal help50 make debug.  

# Demonstração  

<img src="../assets/debugDemo.gif" />  

Começando
Faça login em code.cs50.io usando sua conta do GitHub.
Clique dentro da janela do terminal e execute cd.
No $prompt, digitemkdir debug
Agora executecd debug
Em seguida, copie e cole wget https://cdn.cs50.net/2022/fall/labs/1/debug.cem seu terminal para baixar o código de distribuição deste laboratório.
Agora tente compilar este programa, digitando make debuge veja o que acontece!
Você provavelmente verá um erro que diz:debug.c:9:5: error: use of undeclared identifier 'name'
Isso significa que há um erro que tem algo a ver com um “identificador não declarado”, na linha 9. Corrija esse bug e tente compilar novamente. Tenha em mente que a depuração é um processo iterativo. Você pode precisar corrigir um erro, compilar e, em seguida, corrigir outro erro, compilar novamente várias vezes!
Pergunta para reflexão
Por que você acha que C (assim como outras linguagens de programação) tem regras tão específicas em relação à sintaxe?
Como testar seu código
Seu programa deve se comportar de acordo com os exemplos abaixo.

```
debug/ $ ./debug
What is your name? Carter
Where do you live? Cambridge
Hello, Carter, from Cambridge!
```

```
debug/ $ ./debug
What is your name? Margaret
Where do you live? New York
Hello, Margaret, from New York!
```

Você pode verificar seu código usando `check50`, um programa que o CS50 usará para testar seu código quando você enviar, digitando o seguinte no prompt $. Mas certifique-se de testar você também!

`check50 cs50/labs/2023/x/debug`  

Smilies verdes significam que seu programa passou no teste! Franzidas vermelhas indicarão que seu programa produz algo inesperado. Visite a URL que `check50` gera a saída para ver a entrada `check50` entregue ao seu programa, qual saída ela esperava e qual saída seu programa realmente deu.  

Para avaliar se o estilo do seu código (recuos e espaçamento) está correto, digite o seguinte no $prompt.  

`style50 debug.c`

## Como enviar  

Não há necessidade de enviar! Este é um problema prático opcional.

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>