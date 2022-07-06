#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
char alph;
char Alph;
	
for (alph = 'a'; alph <= 'z'; ++alph);
{
putchar(alph);
}

for (Alph = 'A'; Alph <= 'Z'; ++Alph);
{
putchar(Alph);
}

putchar('\n');

return (0);

}

