#include<stdio.h>
#include<unistd.h>
/**
 * main - prints and that piece of art is useful\" \-dora
 *Korpar, 2015-10-19
 *59 is the length of the message
 *Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
