// Exercício 3 - Dinheiro (versão fácil)
#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

// Quanto de cents ainda deve ao cliente;
// Quantas moedas você usou até agora ao passar por esse algoritmo

int main(void)
{
    // Ask how many cents the customer is owed
    // Pergunte quantos centavos o cliente deve
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    // Calcule o número de moedas de 25 centavos para dar ao cliente
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    // Calcule o número de moedas de dez centavos para dar ao cliente
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    // Calcule o número de moedas de cinco centavos para dar ao cliente
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    // Calcule o número de centavos para dar ao cliente
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    // Somar moedas
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    // Imprima o número total de moedas para dar ao cliente
    printf("%i\n", coins);
}

// A função solicita ao usuário um número de centavos usando get_int
// Se o usuário inserir um int negativo, seu código deve solicitar ao usuário que digite novamente.
int get_cents(void)
{
    // TODO
    return 0;
}


// a função calcula (e retorna como um int) quantas moedas de 25 centavos um cliente deve receber se for devido a ele.
int calculate_quarters(int cents)
{
    // TODO
    return 0;
}


// a função calcula quantas moedas de 10 centavos um cliente deve receber se for devido a ele.
int calculate_dimes(int cents)
{
    // TODO
    return 0;
}


// a função calcula quantas moedas de 5 centavos um cliente deve receber se for devido a ele.
int calculate_nickels(int cents)
{
    // TODO
    return 0;
}


// a função calcula quantas moedas de 1 centavos um cliente deve receber se for devido a ele.
int calculate_pennies(int cents)
{
    // TODO
    return 0;
}