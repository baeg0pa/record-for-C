#include <stdio.h>

/*구조체 선언*/
struct fish{
	const char *name;
	const char *species;
	int teeth;
	int age;
};

/*카탈로그 항목 출력 */
void catalog(struct fish f)
{
	printf("%s는 %s종이며, 이빨이 %i개고 %i살입니다.\n", f.name, f.species, f.teeth, f.age);
}

/*수족관 수조의 설명 출력*/
void label(struct fish f)
{
	printf("이름: %s\n종: %s\n이빨 수: %i\n나이: %i\n", f.name, f.species, f.teeth, f.age);
}


int main()
{
	struct fish snappy = {"스내피", "피라냐", 69, 4};
	catalog(snappy);
	label(snappy);
	
	return 0;
}
