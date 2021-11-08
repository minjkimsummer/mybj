#include <stdio.h>

int	main(void)
{
	long long a, b ,c, n;
	
	n = 0;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if (b >= c)
	{
		printf("-1 \n");
		return (0);
	}

	n = a / (c - b) + 1;

	printf("%lld \n", n);
	return (0);
}
