#include <stdio.h>

int main(void) {

	short data = 3,
	*p = &data,//address of data
		**pp = &p;//address of pointer p
	
	printf("[before ] data:%d\n", data);
	*p = 40;
	printf("[Use *p ]data:%d\n", data);
	**pp = 500;
	printf("[use **pp]data:%d\n", data);

	return 0;
}
