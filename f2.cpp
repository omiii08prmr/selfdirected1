
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