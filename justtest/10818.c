#include <stdio.h>

int main(){
	int n, min, max;
	scanf("%d", &n);
	min = 1000001;
	max = -1000001;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}
	printf("%d %d\n", min, max);
	return (0);
}
