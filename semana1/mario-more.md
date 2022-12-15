<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Exercício 2: Mario versão difícil](https://cs50.harvard.edu/x/2022/psets/1/mario/more/)   

![image](https://user-images.githubusercontent.com/41968938/206063279-53dfd7d3-eb04-4d63-97a2-4718d38bcdb7.png)  

Nesse exercício vamos recriar essas pirâmides em C, ainda que em texto, usando hashes ( # ) para tijolos, como visto a seguir:  

```
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```

O programa deverá permitir que o usuário decida qual deve ser a altura da pirâmide,  
solicitando para ele um número inteiro positivo entre 1 e 8 inclusive.  
Se o usuário não inserir um número inteiro positivo entre 1 e 8 (inclusive) quando solicitado,  
o programa deve solicitar novamente ao usuário até que ele coopere.  
Observe que a largura da “lacuna” entre as pirâmides adjacentes é igual à largura de dois hashes, independentemente da altura das pirâmides.  

&nbsp;

# Começando:

1 - Entre no *Terminal* do VsCode: `Ctrl`+`'`  

2 - Entrar nessa pasta: `cd pset1`  
OBS: Caso a pasta possua espaço, por exemplo: *Semana 1*  
Será necessário colocar aspas para entrar na pasta: `cd 'Semana 1'` 

3 - No terminal digite o comando: `wget https://cdn.cs50.net/2022/fall/psets/1/mario-more.zip`  
seguido de *ENTER* para baixar o zip *mario-more* que contem a pasta *mario-more* com o arquivo em C.  

4 - Execute o unzip: `unzip mario-more.zip` para extrair a pasta *mario-more* dentro da pasta *pset1*.  

5 - Você não precisa mais do arquivo ZIP, então você pode executar o comando para excluir: `rm mario-more.zip`  

6 - Agora entre na pasta: `cd mario-more`  

7 - Se tudo foi bem sucedido, você deve executar o comando `ls` que listará os arquivos dentro dessa pasta, nesse caso deverá ter o arquivo *mario.c*  
A execução `code mario.c` deve abrir o arquivo onde você digitará seu código para este conjunto de problemas. Se não, refaça seus passos e veja se consegue determinar onde errou!  

8 - No arquivo *mario.c* faça o exercício proposto;

9 - Teste seu código: `check50 cs50/problems/2022/x/mario/more`;  

10 - Avalie o estilo do seu código: `style50 mario.c`;  

11 - Envie seu código: `submit50 cs50/problems/2022/x/mario/less` depois digite: `yes`  

&nbsp;

[Ver o progresso no Curso](https://cs50.me/cs50x)

&nbsp;

# DICA  

Este vídeo irá te ajudar a entender o problema ;)  
Atenção: para adicionar legendas ao vídeo clique no botão CC localizado no Player e selecione a opção "Português (Brasil)".  
Uma excelente aula para você!  
## <img src="../assets/youtube.svg" width=20 /> [CC50: PSet 1 - Mario (versão difícil)](https://www.youtube.com/watch?v=c0QS46ieiu4)  

   
Seu código funciona conforme prescrito quando você insere:  
•	-1 (ou outros números negativos)?  
•	0 ?  
•	1 a 8 ?  
•	9 ou outros números positivos?  
•	letras ou palavras?  
•	nenhuma entrada, quando você apenas pressiona Enter?  

&nbsp;

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>
