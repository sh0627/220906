#include <stdio.h>

int main(int argc, char* argv[]) {

	int num = 0;

	printf("1���� 100 ������ ���� �Է��ϼ���\n");
	scanf_s("%d", &num);
	printf("\n");

	if (num < 1 || num > 100) {
		printf("1���� 100 ������ ���� �ƴմϴ�.\n");
		return 0;
	}

	for (int i = 0; i < num; i++) {
		for (int j = num - i; j > 0; j--) {
			printf("*");
		}
		for (int k = 0; k < i * 2; k++) {
			printf(" ");
		}
		for (int n = 0; n < num - i; n++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i ; j++) {
			printf("*");
		}
		for (int k = 0; k < (2 * num) - (2 * (i + 1)); k++) {
			printf(" ");
		}
		for (int n = 0; n <= i; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}