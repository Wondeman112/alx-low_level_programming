#!/bin/bash
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n= rand() - RAND_MAX / 2;
	print("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	return (0);
}
