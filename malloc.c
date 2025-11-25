#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	//20byte
	p_name = (char*)malloc(20);

	if (p_name != NULL) {

		while (1) {

			printf("ENTER YOUR NAME:");
			gets(p_name);

			if ((int)p_name == "quit") break;

			printf("Hi %s\n", p_name);
		}
		free(p_name);
	}
	else {
		printf("ERROR:memory allocation error");
	}

	return 0;
}