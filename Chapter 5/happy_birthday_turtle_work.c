#include <stdio.h>

typedef struct {
	const char *name;
	const char *species;
	int age;
}turtle;

void happy_birthday(turtle *t)
{
	(*t).age = (*t).age + 1;		//t->age = t->age + 1;
	printf("생일 축하해 %s! 이제 %i살이 되었네!\n", (*t).name, (*t).age);
}

int main()
{
	turtle myrtle = {"꼬부기", "장수거북", 99};
	happy_birthday(&myrtle);
	printf("%s의 나이는 이제 %i살입니다.\n", myrtle.name, myrtle.age);
}
