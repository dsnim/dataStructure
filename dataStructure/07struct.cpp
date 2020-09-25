#include<stdio.h>
#include <string.h>

typedef struct person {
	char name[20];
	int age;
}Person;

int main() {

	Person manA;                // manA
								//     |  name  |  age  |
	//manA = { "none", 0 };
	// 구조체안의 멤버필드 전체에 한번에 접근 할 수 있는건
	// 변수 선언과 동시에 최초 한번만 가능합니다

	Person manB = { "none", 0 };
	strcpy_s(manB.name, sizeof(manB.name), "손흥민");
	manB.age = 28;

	printf("이름 : %s\n", manB.name);
	printf("나이 : %d\n", manB.age);

	Person tmp = manB;
	printf("%s - %d\n", tmp.name, tmp.age);

}