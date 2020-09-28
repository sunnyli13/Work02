#include <stdio.h>

int main() {

	unsigned int x;
	int y;
	char a = 'a';
	short b = 32767;
	short c = 32768;
	short d = 32769;
	printf("Hello my name is Sunny.\nUnsigned Int: %d\nSigned Int: %d\n", x, y);
	printf("Char: %c\nShort (In bounds): %d\nShort (Out bounds): %d\t%d\n", a, b, c, d);

	return 0;

}