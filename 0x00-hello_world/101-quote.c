#include <unistd.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error
 * without using printf or puts functions.
 *
 * Return: Always 1 (error)
 */
int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}

