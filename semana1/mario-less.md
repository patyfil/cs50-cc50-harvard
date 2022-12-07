<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Exercício 1: Mario versão fácil](https://cs50.harvard.edu/x/2022/psets/1/mario/less/)   

![image](https://user-images.githubusercontent.com/41968938/205998511-bfd5ed1c-8901-4e23-8879-c88801c7b4cd.png)  
Nesse exercício devemos recriar a pirâmide abaixo em texto, usando hashes (#) para os tijolos, como visto a seguir:  

```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```

O programa deverá permitir que o usuário decida qual deve ser a altura da pirâmide,  
solicitando para ele um número inteiro positivo entre 1 e 8 inclusive.  
Se o usuário não inserir um número inteiro positivo entre 1 e 8 (inclusive) quando solicitado,  
o programa deve solicitar novamente ao usuário até que ele coopere.  

&nbsp;

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset1`  
OBS: Caso a pasta possua acento gráfico, por exemplo: *Módulo 1-C*  
Será necessário colocar aspas para entrar na pasta: `cd 'Módulo 1-C'`  

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2021/fall/psets/1/mario-less.zip`  
seguido de *ENTER* para baixar o zip *mario-less* que contem a pasta *mario-less* com o arquivo em C.  

4 - Execute o unzip: `unzip mario-less.zip` para extrair a pasta *mario-less* dentro da pasta *pset1*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm mario-less.zip`  

6 - Agora entre na pasta: `cd mario-less`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *mario.c*  
A execução `code mario.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!

8 - Adicione um novo arquivo chamado *pseudocodigo.txt* dentro do seu diretório mario e cole o pseudocódigo de exemplo:  

```
   PSEUDOCÓDIGO:  
   Existe mais de uma forma para resolver esse exercício, esse spoiler aqui é apenas uma delas!  

   1- Peça ao usuário o tamanho da altura.  
   2- Se o tamanho da altura for menor que 1 ou maior que 8 (altura < 1 || altura > 8),   
      fique nesse passo até que o usuário insira uma entrada válida.  
   3- Itere a variável i até o tamanho da altura.  
   4- Imprima os #. [Não se esqueça da quebra de linha!]  
```  

9 - No arquivo *mario.c* faça o exercício proposto;  

10 - Teste seu código: `check50 cs50/problems/2022/x/mario/less`;  

11 - Avalie o estilo do seu código: `style50 mario.c`;  

12 - Envie seu código: `submit50 cs50/problems/2022/x/mario/less` depois digite: `yes`  

&nbsp;

# DICA 1 - Construindo o oposto  
Agora que seu programa está (espero!) aceitando a entrada conforme prescrito, é hora de outra etapa.  
Acontece que é um pouco mais fácil construir uma pirâmide alinhada à esquerda do que à direita, como abaixo.  

```
#
##
###
####
#####
######
#######
########
```

Então, vamos construir uma pirâmide alinhada à esquerda primeiro e, depois que estiver funcionando, alinhá-la à direita!  
Modifique mario.c à direita para que não imprima mais apenas a entrada do usuário, mas imprima uma pirâmide alinhada à esquerda com essa altura.  
**Dicas:**  
•	Lembre-se de que um hash é apenas um caractere como outro qualquer, portanto, você pode imprimi-lo com printf.  
•	Assim como o Scratch tem um bloco de repetição, o C também tem um for loop, por meio do qual você pode iterar algumas vezes.  
Talvez em cada iteração i, você possa imprimir tantos hashes?  
•	Na verdade, você pode “aninhar” loops, iterando com uma variável (por exemplo, i) no loop “externo” e outra (por exemplo, j) no loop “interno”.  
Por exemplo, veja como você pode imprimir um quadrado de altura e largura 'n' abaixo. Claro, não é um quadrado que você deseja imprimir!
```
for (int i = 0; i < n; i++)
{
   for (int j = 0; j <= n; j++)
   {
      printf("#");
   }
   printf("\n");
}
```
&nbsp;

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 1 - Mario (versão fácil)](https://www.youtube.com/watch?v=8HciXXDwUfU)

 
Seu código funciona conforme prescrito quando você insere:  
•	-1 (ou outros números negativos)?  
•	0 ?  
•	1 a 8 ?  
•	9 ou outros números positivos?  
•	letras ou palavras?  
•	nenhuma entrada, quando você apenas pressiona Enter?  

&nbsp;

# DICA 2
![image](https://user-images.githubusercontent.com/41968938/206001936-4872cc4a-c7a7-403a-9517-8d5aac5f7fe3.png)
### Enquanto o número de espaço for *menor ou igual* a altura *menos* a linha, será preenchido com espaço, senão será preenchido com # no próximo for.


<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>