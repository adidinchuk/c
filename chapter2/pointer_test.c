#include <stdio.h>
#include <stdlib.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
	int i;
	for (i = 0; i < len; i++){
		printf("%.2x", start[i]);
		printf("\n");
	}
	printf("\n");
}

void show_int(int x){
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	show_bytes((byte_pointer) &x, sizeof(void  *));
}

int main(int argc, char* argv[]){
	int k = atoi(argv[1]);
	show_int(k);
	return 0;
}