#include <stdio.h>

int main() {
	int a, temp;
	int arr[42] = {0, };

	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &temp);
		temp %= 42;
		arr[temp] += 1;
	}
	temp = 0;
	for(int i = 0; i < 42; i++)
		if(arr[i] > 0)
			temp++;
	printf("%d\n", temp);
	return(0);
}
