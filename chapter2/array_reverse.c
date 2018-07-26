#include <stdio.h>

void print_array(int a[], int len){
	printf("%d\n",len);
 	int i = 0;
        for (i = 0; i < len; i++){
                printf("%d",a[i]);
        }
	printf("\n");
}

void inplace_swap(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void reverse_array(int a[], int cnt){
	int first, last;
	for(first = 0, last = cnt-1; first < last; first++,last--)
		inplace_swap(&a[first],&a[last]);
	print_array(a, cnt);
}

int main(void){
	int ar[4] = {1,2,3,4};
	int ar2[5] = {1,2,3,4,5};
	
	print_array(ar, sizeof(ar)/sizeof(ar[0]));
	reverse_array(ar, sizeof(ar)/sizeof(ar[0]));
	
	print_array(ar2, sizeof(ar2)/sizeof(ar2[0]));
	reverse_array(ar2, sizeof(ar2)/sizeof(ar2[0]));
}

