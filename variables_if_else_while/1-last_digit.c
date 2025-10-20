#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		msg = "and is greater than 5";
	else if (last_digit == 0)
		msg = "and is 0";
	else
		msg = "and is less than 6 and not 0";

	printf("Last digit of %d is %d %s\n", n, last_digit, msg);

	return (0);
}
