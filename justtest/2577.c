#include <stdio.h>

int main() {
	int a, b, c, sum, temp;
	int num[10] = {0, };
	
	scanf("%d %d %d", &a, &b, &c);
	sum = a*b*c;
	while(sum != 0)
	{
		temp = sum % 10;
		sum /= 10;
		num[temp] += 1;
	}
	for(int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
}
