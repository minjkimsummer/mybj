#include <stdio.h>

int main(){
	int num, max;
	float sum;
	int *arr;
	max = 0;

	scanf("%d", &num);
	arr = malloc(sizeof(int)*num);
	for(int i = 0; i < num; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > max)
			max = arr[i];
	}
	for(int i = 0; i < num; i++)
		sum = arr[i] / max * 100;
	printf("%f\n", sum/num);

	free(arr);
	return(0);
}
