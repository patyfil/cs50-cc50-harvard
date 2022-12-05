<p align="right">
   <a href="https://patyfil.github.io/CS50-CC50-Harvard/">Voltar ao README</a>
</p>
# Como testar seu código - Criando chave SSH para o GitHub  

[Vídeo Tutorial](https://www.youtube.com/watch?time_continue=135&v=B254ENe2lsg&feature=emb_logo) para te ajudar a realizar os passos abaixo.  


Siga os passos abaixo:  
•	Abra uma janela do terminal com CS50 IDE ou qualquer outro ambiente de desenvolvimento (IDE). Exemplo: Visual Studio Code.  
•	Execute no terminal o comando *ssh-keygen*. Quando aparecer a mensagem no terminal “save the key” (salve a chave), aperte Enter, sem digitar nada.  
•	Logo em seguida, será pedido para adicionar uma senha. Se você estiver usando sua conta do GitHub apenas para o CC50, não precisa de senha, logo, aperte Enter. Caso você já utilize o GitHub, escreva uma senha (que você não vá esquecer!) e clique no botão Enter, insira novamente a senha e aperte Enter.   
•	Execute no terminal `cat ~/.ssh/id_rsa.pub`. Você irá ver a sua "chave pública (public key)" com várias linhas e caracteres aleatórios. Selecione todas essas linhas e copie (CTRL + C), lembre-se de ir de ssh-rsa até o fim! Cuidado para não pegar o texto do terminal ($).  
•	Visite a página https://github.com/settings/keys, faça o login na sua conta do GitHub, preenchendo o seu username e senha[da conta].  
•	Clique em *New SSH Key*(Nova Chave SSH).  
•	Cole sua chave pública na caixa texto Key(chave). Você pode colocar qualquer título, recomendamos (CS50).  
•	Clique em *Add SSH Key* (Adicionar Chave SSH).  
•	[Clique aqui](https://submit.cs50.io/) para autorizar que a IDE do CS50 crie um repositório do curso e acesse seus códigos do GitHub.    
Feito isso, você receberá um e-mail do CS50 Bot (bot50). **VOCÊ PRECISA ABRIR O E-MAIL E AUTORIZAR O BOT!!!**  


•	ATENÇÃO: SEM OS PASSOS ACIMA, OS COMANDOS ABAIXO NÃO IRÃO FUNCIONAR!!!  

Se você teve algum problema, [escreva aqui no fórum](https://discourse.napratica.org.br/t/tutorial-ide/37538)!  
Após o passo a passo, execute o seguinte comando para avaliar a exatidão do seu código usando check50.     

Mas certifique-se de compilar e testar você mesmo! Caso tenha criado o arquivo em algum diretório, não se esqueça de navegar até o mesmo,    
utilizando o comando `cd .` :D  
`check50 cs50/problems/2021/x/hello`  
Execute o seguinte comando para avaliar o estilo do seu código usando style50:  
`style50 hello.c`  

<p align="right">
   <a href="https://patyfil.github.io/CS50-CC50-Harvard/">Voltar ao README</a>
</p>
