<<<<<<< HEAD
// Abstraction and scope
#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
     int i = get_positive_int();
     printf("%i\n", i);
}

// Solicita um número inteiro positivo ao usuário
int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int("Número positivo: \n"); 
	 }
     while(n < 1);
     return n;
=======
// Abstraction and scope
#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
     int i = get_positive_int();
     printf("%i\n", i);
}

// Solicita um número inteiro positivo ao usuário
int get_positive_int(void)
{
     int n;
     do
     {
          n = get_int("Número positivo: \n"); 
	 }
     while(n < 1);
     return n;
>>>>>>> e1bff6187828a38bc2614e69729b96f836e4da7c
}