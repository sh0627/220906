#include <stdio.h>

int main() {

	int input = 0;

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++)
	{
		printf("**");
	}

	return 0;
}