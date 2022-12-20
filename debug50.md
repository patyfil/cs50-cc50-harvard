<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>

<br>  

# debug50 - Ferramenta de Depuração  

Assim que uma sessão de depuração for iniciada, a barra de ferramentas Depurar aparecerá na parte superior do editor.  
![debug](https://user-images.githubusercontent.com/41968938/208586137-2348bb28-b177-4bb2-a4a9-6abb702d3293.jpg)  

![debug2](https://user-images.githubusercontent.com/41968938/208586642-2d0c0005-ed3a-464e-8852-bda67f0a5401.jpg)

<br>  

`debug50` - Debug/Depuração significa executar o código passo a passo em uma ferramenta de depuração, para localizar o ponto exato em que você cometeu um erro de programação.  

# Como executar a Depuração do seu código:  
1 - Entre na pasta onde tem seu arquivo para depurar:
`cd Aula2/`  

2 - Abra o arquivo: `code nomedoarquivo.c`  

3 - Digite seu código e Compile o arquivo: `make nomedoarquivo`  

4 - Execute o arquivo para testar: `./nomedoarquivo`  

5 - Debug, exemplo: `debug50 ./nomedoarquivo`  


# Caso ocorra o erro:  
# ``` Can't debug this program! Are you sure you're running debug50 on an executable or a Python script? ```  

1 - Vá no GitHub, no seu codespace:   https://github.com/code50/seucódigo

![100](https://user-images.githubusercontent.com/41968938/208599070-8f990b5f-f315-4750-b136-eec8aea5bc63.jpg)

2 - Delete seu codespace:  

![101](https://user-images.githubusercontent.com/41968938/208599296-453fae3d-834b-4ea2-942e-356ec3e26abf.jpg)  

3 - Abra o [Visual Studio Code for CS50](https://code.cs50.io/) ou digite no navegador: `https://code.cs50.io/`  
Clique em: Log in via GitHub  
![102](https://user-images.githubusercontent.com/41968938/208601806-3a59c923-5f89-426b-b882-9ff980a3216a.jpg)  

<br>  

4 - Um novo codespace será criado com um nome aleatório  

![102 1](https://user-images.githubusercontent.com/41968938/208602088-8ed17cf9-98d7-48ff-a97c-ff362969b8d6.jpg)  

5 - Execute os passos de 1 a 5 de "Como executar a Depuração do seu código"  

6 - Vai aparecer a seguinte mensagem após executar o `debug50 nomedoarquivo`:  
![102 3](https://user-images.githubusercontent.com/41968938/208603525-14dc6ace-90a8-4da9-a7c2-2bcfc248202f.jpg)
Tradução: Parece que você não definiu nenhum ponto de interrupção. Defina pelo menos um ponto de interrupção clicando à esquerda de um número de linha e execute novamente o debug50!

7 - Defina o ponto de interrupção, passando com o mouse ao lado do número da linha:  

![102 4](https://user-images.githubusercontent.com/41968938/208604059-7784f6f0-5af5-4c45-ac35-818c8de78fb9.jpg)

obs: caso a bolinha vermelha não apareça, é porque você não instalou a extensão C/C++ IntelliSense.  
Para instalar extensões, clique no ícone como mostra a seguir:  

![102 5](https://user-images.githubusercontent.com/41968938/208604614-df8dc291-b431-44e5-bf6d-9f7b9eab63fb.jpg)

![105](https://user-images.githubusercontent.com/41968938/208607069-6f183730-9f0a-459e-9181-ca13e21ce9de.jpg)





<br>  

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
