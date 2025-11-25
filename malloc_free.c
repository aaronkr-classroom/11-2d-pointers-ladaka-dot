#include <stdio.h>

void Test() {

	short* p = (short*)malloc(100);
	&p=
	free(p);//실수로 메모리 할당 해제 안하면 오류 발생
}

int main(void) {

	int i;
	for (i = 0; i < 100; i++)Test(); 

	return 0;
}