#include <cs50.h>
#include <stdio.h>

int main(void)
{
     //  Pega o valor de n com o usuário
    int altura;
    do
    {
          altura = get_int("Altura: ");
    }
    while (altura < 1);

    // Imprima pontos de interrogação
    for(int linha = 0; linha < altura; linha++)
    {
         printf("?");
    }
    printf("\n");
}


// #include <cs50.h>
// #include <stdio.h>

// int main(void)
// {
//     for(int i = 0; i < 3; i++)
//     {
// 	    for(int j = 0; j < 3; j++)
//     	{
//          		printf("#");
//     	}
//     	printf("\n");
//     }
// }