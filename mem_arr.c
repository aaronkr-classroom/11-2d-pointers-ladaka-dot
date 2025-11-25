#include <stdio.h>

#define MAX_COUNT 5 // maximum input count is 5

int main(void) {

	int num[MAX_COUNT],
		count = 0;
		sum = 0;
		i;
		while (count < MAX_COUNT) {
			printf("input some values if 9999, quit");
			//scanf_s("%d",&num[count]);
			scanf_s("%d", num+count);

			if (num[count] == 9999)break;
			count++;
	}


		for (i = 0; i < count; i++) {
			if (i > 0)printf("+");
			printf("%d", num[i]);
			sum = sum + num[i];
		}

		printf("=%d\n", sum);
	return 0;
}