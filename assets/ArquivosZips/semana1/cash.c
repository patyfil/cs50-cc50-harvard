// Exercicio 3 - Dinheiro (versao facil)
#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

// Quanto de cents ainda deve ao cliente;
// Quantas moedas voce usou ate agora ao passar por esse algoritmo

int main(void)
{
    // Ask how many cents the customer is owed
    // Pergunte quantos centavos o cliente deve
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    // Calcule o numero de moedas de 25 centavos para dar ao cliente
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    // Calcule o numero de moedas de dez centavos para dar ao cliente
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    // Calcule o numero de moedas de cinco centavos para dar ao cliente
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    // Calcule o numero de centavos para dar ao cliente
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    // Somar moedas
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    // Imprima o numero total de moedas para dar ao cliente
    printf("%i\n", coins);
}

// A funcao solicita ao usuario um numero de centavos usando get_int
// Se o usuario inserir um int negativo, seu codigo deve solicitar ao usuario que digite novamente.
int get_cents(void)
{
    // TODO
    return 0;
}


// a funcao calcula (e retorna como um int) quantas moedas de 25 centavos um cliente deve receber se for devido a ele.
int calculate_quarters(int cents)
{
    // TODO
    return 0;
}


// a funcao calcula quantas moedas de 10 centavos um cliente deve receber se for devido a ele.
int calculate_dimes(int cents)
{
    // TODO
    return 0;
}


// a funcao calcula quantas moedas de 5 centavos um cliente deve receber se for devido a ele.
int calculate_nickels(int cents)
{
    // TODO
    return 0;
}


// a funcao calcula quantas moedas de 1 centavos um cliente deve receber se for devido a ele.
int calculate_pennies(int cents)
{
    // TODO
    return 0;
}