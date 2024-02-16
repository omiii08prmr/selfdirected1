/*
* FILE : f2.CPP
* PROJECT : SENG1000 - Focused Assignment #2
* PROGRAMMER : Aumkumar Parmar
* Student id:8982250
* FIRST VERSION : 2024-01-24
* DESCRIPTION :
* The function in this file are used to add integers from 1 to 500 using while loop and display sum after the loop is completed.
*/
#include <stdio.h>

int main(void)
{
	int i = 1;
	int maxnum = 500;
	int sum = 0;

	while (i <= maxnum)
	{
		sum += i;
		i++;

	}
	printf("%d\n", sum);

	return 0;
}