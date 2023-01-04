<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>

# [Exercício 3 - Substitution (Substituição)](https://cs50.harvard.edu/x/2022/psets/2/substitution/)

Para este problema, você escreverá um programa que implementa uma cifra de substituição, conforme abaixo.

```
$ ./substitution JTREKYAVOGDXPSNCUIZLFBMWHQ
plaintext:  HELLO
ciphertext: VKXXN
```

# Começando:

Abra o [VS Code](https://code.cs50.io/)

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset2`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 2*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 2'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/2/substitution.zip`  
seguido de *ENTER* para baixar o zip *substitution.zip* que contem a pasta *substitution* com o arquivo em C.  

4 - Execute o unzip: `unzip substitution.zip` para extrair a pasta *substitution* dentro da pasta *pset2*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm substitution.zip`  

6 - Agora entre na pasta: `cd substitution`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *substitution.c*  
A execução `code substitution.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *substitution.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2022/x/substitution`;  

10 - Avalie o estilo do seu código: `style50 substitution.c`;  

11 - Envie seu código: `submit50 cs50/problems/2022/x/substitution` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# Introdução ao Exercício  
Em uma cifra de substituição, nós “criptografamos” (ou seja, ocultamos de forma reversível) uma mensagem substituindo cada letra por outra letra. Para isso, utilizamos uma chave: neste caso, um mapeamento de cada uma das letras do alfabeto para a letra correspondente quando criptografada.  

Para “descriptografar” a mensagem, o destinatário da mensagem precisaria conhecer a chave, para que pudesse reverter o processo: traduzir o texto criptografado (geralmente chamado de texto cifrado) de volta para a mensagem original (geralmente chamada de texto simples).  

Uma chave, por exemplo, pode ser a string `NQXPOMAFTRHLZGECYJIUWSKDVB`. Esta chave de 26 caracteres significa que `A` (a primeira letra do alfabeto) deve ser convertida em `N` (o primeiro caractere da chave), `B` (a segunda letra do alfabeto) deve ser convertida em `Q` (o segundo caractere da chave) e assim por diante.

Uma mensagem como `HELLO`, então, seria criptografada como `FOLLE`, substituindo cada uma das letras de acordo com o mapeamento determinado pela chave.

Vamos escrever um programa chamado `substitution` que permite criptografar mensagens usando uma cifra de substituição. No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, qual deve ser a chave na mensagem secreta que fornecerá em tempo de execução.

Aqui estão alguns exemplos de como o programa pode funcionar. Por exemplo, se o usuário inserir uma chave `YTNSHKVEFXRBAUQZCLWDMIPGJO` e um texto simples de `HELLO`:

```
$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
plaintext:  HELLO
ciphertext: EHBBQ
```

Veja como o programa pode funcionar se o usuário fornecer uma chave `VCHPRZGJNTLSKFBDQWAXEUYMOI` e um texto simples de `hello, world`:

```
$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  hello, world
ciphertext: jrssb, ybwsp
```

Observe que nem a vírgula nem o espaço foram substituídos pela cifra. Substitua apenas caracteres alfabéticos! Observe, também, que o caso da mensagem original foi preservado. Letras minúsculas permanecem minúsculas e letras maiúsculas permanecem maiúsculas.

Se os caracteres na própria chave são maiúsculos ou minúsculos, não importa. Uma chave de `VCHPRZGJNTLSKFBDQWAXEUYMOI` é funcionalmente idêntica a uma chave de `vchprzgjntlskfbdqwaxeuymoi`(como é, aliás, `VcHpRzGjNtLsKfBdQwAxEuYmOi`).

E se um usuário **não fornecer uma chave válida**? O programa deve explicar com uma mensagem de erro:

```
$ ./substitution ABC
Key must contain 26 characters.  
A chave deve conter 26 caracteres.
```

Ou realmente não coopera, **não fornecendo nenhum argumento** de linha de comando? O programa deve lembrar ao usuário como usar o programa:

```
$ ./substitution
Usage: ./substitution key  
Maneira de usar: ./substitution key  
```

Ou realmente não coopera, **fornecendo muitos argumentos** de linha de comando? O programa também deve lembrar ao usuário como usar o programa:

```
$ ./substitution 1 2 3
Usage: ./substitution key  
Maneira de usar: ./substitution key  
```

## Tente
Para experimentar a implementação deste problema pela equipe, execute  

`./substitution key`  
substituindo uma chave válida no lugar de `key`, dentro [desta sandbox](http://bit.ly/30Gnoru).  

## Especificação  

Projete e implemente um programa, `substitution`, que criptografa mensagens usando uma cifra de substituição.

* Implemente seu programa em um arquivo chamado `substitution.c` em um diretório chamado substitution.  
* Seu programa deve **aceitar um único argumento de linha de comando**, a chave a ser usada para a substituição. A chave em si não deve diferenciar maiúsculas de minúsculas, portanto, se qualquer caractere na chave é maiúsculo ou minúsculo, isso não deve afetar o comportamento do seu programa.  
* Se seu programa for executado **sem nenhum argumento de linha de comando ou com mais de um argumento de linha de comando**, seu programa deve **imprimir** uma mensagem de erro de sua escolha (com printf) e retornar de `main` um valor de `1` (que tende a significar um erro) imediatamente.  
* Se a chave for inválida (como por não conter 26 caracteres, conter qualquer caractere que não seja um caractere alfabético ou não conter cada letra exatamente uma vez), seu programa deve **imprimir** uma mensagem de erro de sua escolha (com printf) e retornar de `main` um valor de `1` imediatamente.  
* Seu programa deve produzir `plaintext:`(sem uma nova linha) e, em seguida, solicitar ao usuário um `string` de texto simples (usando get_string).
* Seu programa deve produzir `ciphertext:`(sem uma nova linha) seguido pelo **texto cifrado** correspondente do texto simples, com cada caractere alfabético no texto simples substituído pelo caractere correspondente no texto cifrado; caracteres não alfabéticos devem ser exibidos inalterados.  
* Seu programa deve **preservar maiúsculas e minúsculas**: letras maiúsculas devem permanecer letras maiúsculas; letras minúsculas devem permanecer letras minúsculas.
* Depois de enviar o texto cifrado, você deve **imprimir uma nova linha**. Seu programa deve sair retornando `0` de main.
Você pode achar que uma ou mais funções declaradas `ctype.h` são úteis, pelo [manual.cs50.io](https://manual.cs50.io/) .

# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 2 - Substituição](https://www.youtube.com/watch?v=yOGX9KxvYnA)

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/2-Arrays.html">Voltar ao Índice da Semana 2</a>
</p>
