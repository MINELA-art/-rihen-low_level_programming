#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void) {
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;
    while (i < 10) // c'est cette partie du code qui fais passer la sortie dans une boucle infinie car i est invariant et égal à 0 (0 est toujours < 10)
    {
    putchar(i);
    }
    printf("Infinite loop avoided! \\o/\n");
    return (0);
}