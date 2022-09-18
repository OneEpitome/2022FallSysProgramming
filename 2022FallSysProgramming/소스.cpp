#include <stdio.h>

typedef unsigned char* pointer;

void show_bytes(pointer p, int len) {
	int i;
	for (i = 0; i < len; i++) {
		printf("0x%p\t 0x%.2x\n", p + i, p[i]);
	}
	printf("\n");
}

int main() {
	int a = 15213;
	printf("int a = 15213\n");
	show_bytes((pointer)&a, sizeof(int));
}