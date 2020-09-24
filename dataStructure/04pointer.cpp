#include<stdio.h>

void InputString(char* p, int size) {
	printf("단어 입력 > ");
	scanf_s("%s", p, size);
}

int main() {

	char word[20];

	InputString(word, sizeof(word));
	puts(word);
}