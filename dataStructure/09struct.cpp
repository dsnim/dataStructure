#include<stdio.h>

typedef struct person {
	char name[20];
	int age;
}Person;

typedef struct army {
	Person basic;
	char rank[10];
}Army;

int main() {

	Army man = { "아르미", 20, "병장" };  // man
											//   |    basic   |  rank  |
											//   | name | age |
	printf("이름 : %s\n", man.basic.name);
	printf("나이 : %d\n", man.basic.age);
	printf("계급 : %s\n", man.rank);

}