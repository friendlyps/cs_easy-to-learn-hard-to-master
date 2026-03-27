#include <stdio.h>

int main(void)
{
	int x = 66;
	printf("%c\n", x);

	char y = 65;
	printf("%c\n", y);

	char z = 'B';
	printf("%d\n", z);

	char code = 'A';

	printf("%d %d %d\n", code, code + 1, code + 2);
	printf("%c %c %c\n", code, code + 1, code + 2);

	char code1 = 'a';
	char code2 = 97;

    printf("code1의 값: %c\n", code1);
	printf("code2의 값: %c\n", code2);

	char code3 = 'a';

	printf("자료형의 크기: %d\n", sizeof(code3));
	printf("int의 크기: %d\n", sizeof(int));
	printf("short의 크기: %d\n", sizeof(short));
	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));

	return 0;
}