#include <stdio.h>


void ValueFunc(int a, int b) {
	a += 10;
	b += 10;
}

void Call(int** ppA, int** ppB) {
	//**ppA = 1;
}

void ReferenceFunc(int* pA, int* pB) {
	*pA += 10;
	*pB += 10;
	Call(&pA, &pB);
}

int main() {

	int a = 10;
	int b = 20;

	ValueFunc(a, b);
	printf("a : %d, b : %d\n", a, b);

	ReferenceFunc(&a, &b);
	printf("a : %d, b : %d\n", a, b);
}
