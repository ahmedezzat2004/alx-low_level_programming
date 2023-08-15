#include <stdio.h>
/**
* main - start main
* Description: write alphabet
*
* Return: 0 (success)
*/
int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar( '0' + a );
	putchar( '\n' );
	return (0);
}
