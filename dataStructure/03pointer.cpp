#include<stdio.h>

void UpperChar(char* p) {
	*p += 32;
}

int InputInt(const char* message) {
	int value;
	printf(message);
	scanf_s("%d", &value);
	return value;
}

int main() {

	char stn[] = "Good";
	UpperChar(stn);
	printf("%s\n", stn);

	const char* p = "숫자 입력 > ";
	const char* s = "숫자 입력 > "; //똑같은 상수값은 메모리공간을 만들지 않는다.
	puts(p);
	printf("%p, %p\n", p, s);

	int nA = InputInt("데이터 입력 > ");
	printf("%p\n", &nA);
	printf("%p\n", stn);

}