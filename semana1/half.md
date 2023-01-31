<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>

# [Half (Metade)](https://cs50.harvard.edu/x/2023/problems/1/half/)  

# Metas de aprendizagem
* Trabalhe com diferentes tipos de dados  
* Fundição de tipo de prática  
* Usar operações matemáticas  
* Crie uma função com parâmetros de entrada e valor de retorno  

# Fundo
Suponha que você esteja comendo em um restaurante com um amigo e queira dividir a conta igualmente. Você pode querer antecipar o valor que deve antes que a conta chegue com o imposto adicionado. Neste problema, você completará uma função para calcular o valor que cada um de vocês deve com base no valor da conta, do imposto e da gorjeta.  

## dicas
* Observe que o imposto e a gorjeta são inseridos como porcentagens. Você pode querer alterá-los para valores decimais antes de calcular o total.  
* Como a gorjeta é inserida como um `int`, lembre-se de que, se você dividir um `int` por um `int`, obterá um `int`!  
* A ordem das operações aqui é exatamente a mesma da álgebra, onde a multiplicação e a divisão são realizadas antes da adição e da subtração.  

# Demonstração

<img src="../assets/halfDemo.gif" />

# Começando

1 - Faça login em `code.cs50.io` usando sua conta do GitHub.  
2 - Clique dentro da janela do terminal e execute `cd`.  
3 - No `$`prompt, digite `mkdir half`  
4 - Agora execute `cd half`  
5 - Em seguida, copie e cole `wget https://cdn.cs50.net/2022/fall/labs/1/half.c` em seu terminal para baixar o código de distribuição deste laboratório.  
6 - Você deve concluir a função, `half`, que calcula exatamente metade da conta após a adição de impostos e gorjeta e retorna esse valor.  

# Detalhes da Implementação

Sua função deve usar os parâmetros de entrada, `bill`, `tax` e `tip`, para calcular o valor final. No entanto, como esses valores são porcentagens, você terá que fazer algum trabalho para convertê-los em formatos mais apropriados para usar em seu cálculo.

O imposto deve ser adicionado ao valor da conta antes de calcular a gorjeta. Por fim, você devolverá exatamente a metade do valor total, incluindo o valor da conta, o imposto e a gorjeta.

# Pergunta para reflexão
* Por que você acha que existem diferentes tipos de dados em C?  

# Como testar seu código
Seu programa deve se comportar de acordo com os exemplos abaixo.  

```
half/ $ ./half
Bill before tax and tip: 12.50
Sale Tax Percent: 8.875
Tip percent: 20
You will owe $8.17 each!
```

```
half/ $ ./half
Bill before tax and tip: 23.50
Sale Tax Percent: 7  
Tip percent: 15
You will owe $14.46 each!
```

```
half/ $ ./half
Bill before tax and tip: 100
Sale Tax Percent: 6.25
Tip percent: 18
You will owe $62.69 each!
```

Você pode verificar seu código usando `check50`, um programa que o CS50 usará para testar seu código quando você enviar, digitando o seguinte no `$`prompt. Mas certifique-se de testar você também!  

`check50 cs50/labs/2023/x/half`  

Smilies verdes significam que seu programa passou no teste! Franzidas vermelhas indicarão que seu programa produz algo inesperado. Visite a URL que `check50` gera a saída para ver a entrada `check50` entregue ao seu programa, qual saída ela esperava e qual saída seu programa realmente deu.  

Para avaliar se o estilo do seu código (recuos e espaçamento) está correto, digite o seguinte no `$`prompt.  

`style50 half.c`  

# Como enviar

Não há necessidade de enviar! Este é um problema prático opcional.

<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/">Voltar ao README</a>
</p>
<p align="right">
   <a href="https://patyfil.github.io/cs50-cc50-harvard/1-C.html">Voltar ao Índice da Semana 1</a>
</p>