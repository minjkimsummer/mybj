#include <stdio.h>

int main(){
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);

	return (0);
}

//이론상이나 실제 문제를 돌려봤을때는 맞았는데 예제를 복사해서 돌려보려니까 잘 안된다. 줄바꿈이 문제였던가? 스페이스로 바꾸니까 실행은 된다. 하지만 프로그램이 끝이 나지 않는다. 입력할때 EOF를 직접 칠 수 없어서 그런가?
