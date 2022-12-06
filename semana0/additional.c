<<<<<<< HEAD
// Soma
#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int x = get_int("x: ");

     int y = get_int("y: ");

     printf("%i\n", x + y);
}

// x=4000000000 não funcionará, pois "int" só pode ter cerca de
// dois bilhões positivos e dois bilhões negativos,
// para um total de cerca de quatro bilhões.
=======
// Soma
#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int x = get_int("x: ");

     int y = get_int("y: ");

     printf("%i\n", x + y);
}

// x=4000000000 não funcionará, pois "int" só pode ter cerca de
// dois bilhões positivos e dois bilhões negativos,
// para um total de cerca de quatro bilhões.
>>>>>>> e1bff6187828a38bc2614e69729b96f836e4da7c
// Para valores superiores usa-se "long" no lugar de "int"