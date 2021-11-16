#include <stdio.h>

int main(){
	int num[9];
	int max;
	int a;

	max = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < 9; i++)
		if (num[i] > max)
		{
			max = num[i];
			a = i + 1;
		}
	
	printf("%d\n%d\n", max, a);
}
