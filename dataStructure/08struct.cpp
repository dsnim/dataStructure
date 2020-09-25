#include<stdio.h>
#include <string.h>

typedef struct person {
	char name[20];
	int age;
}Person;

int main() {

	person arr[2] = { "추신수", 38, "류현진", 34 };

	int arrsize = sizeof(arr) / sizeof(person);

	for (int i = 0; i < arrsize; i++) {
		printf("%s - %d 세\n", arr[i].name, arr[i].age);
	}
	puts("");


}