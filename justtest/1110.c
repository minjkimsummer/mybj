#include <stdio.h>

int main(){
	int n, i, temp, result;
	
	scanf("%d", &n);

	i = 0;
	temp = -1;
	result = -1;
	while (n != result)
	{
		if (temp == -1)
			result = n;
		temp = (result / 10) + (result % 10);
		result = (result % 10) * 10 + (temp % 10);
		i++;
	}

	printf("%d", i);

	return (0);
}
