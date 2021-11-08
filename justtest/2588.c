#include <stdio.h>

int	main(void)
{
	int a, b, sum;
	
	sum = 0;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", (b % 10) * a);
	sum += (b % 10) * a;
	b /= 10;
	printf("%d\n", (b % 10) * a);
	sum += ((b % 10) * a) * 10;
	b /= 10;
	printf("%d\n", (b % 10) * a);
	sum += ((b % 10) * a) * 100;
	printf("%d\n", sum);

	return (0);
}
