#include<stdio.h>

//void InputArray(int* arr, int size) {
void InputArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d번째 입력 > ", i + 1);
		scanf_s("%d", arr + i); //scanf_s("%d", &arr[i]);
	}
	puts("");
}

void OutputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	puts("");
}

int main() {

	int value[3];
	int valueSize = sizeof(value) / sizeof(int);

	InputArray(value, valueSize);
	OutputArray(value, valueSize);

}