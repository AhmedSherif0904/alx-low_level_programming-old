#include <stdio.h>
#include <unistd.h>

#include "main.h"

/**
 * main - entry point
 *
 *
 *
 * description : prints putchar
 *
 * Return: -1
 */

int main(void)
{
	long i, ro = 0, rn = 1, r;

	for (i = 0; i < 50; i++)
	{
		r = ro + rn;
		ro = rn;
		rn = r;
		printf("%ld", r);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
