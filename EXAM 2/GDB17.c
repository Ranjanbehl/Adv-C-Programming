#include <stdlib.h>
#include <stdio.h>

void f2(void) {
	printf("unreachable function");
	return;
}

void f1(void) {
	int top_ref = 0x55555555;
	char buf[8] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
	int bottom_ref = 0xFFFFFFFF;
	return;
}

int main(int argc, char ** argv) {
	f1();
	return EXIT_SUCCESS;
}
