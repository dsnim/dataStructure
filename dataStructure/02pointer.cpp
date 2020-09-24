#include<stdio.h>
#define SWAP(a, b, type) { type t; t=a; a=b; b=t; }

void ShowData(int argA, int argB) {
	printf("%d, %d\n", argA, argB);
}

void SwapData(int* pA, int* pB) {
	int tmp = *pA;
	*pA = *pB;
	*pB = tmp;
}

int main() {

	int vA = 10;
	int vB = 20;

	ShowData(vA, vB);
	SwapData(&vA, &vB);
	ShowData(vA, vB);
	SWAP(vA, vB, int);
	/*int t = vA;
	vA = vB;
	vB = t;*/
	ShowData(vA, vB);

}