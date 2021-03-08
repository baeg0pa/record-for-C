#include <stdio.h>

typedef union {			//공용체
	short count;
	float weight;
	float volume;
}quantity;

typedef struct {			//구조체
	const char *name;
	const char *country;
	quantity amount;
}fruit_order;

int main() {
	fruit_order apples = {"사과","영국", .amount.weight=4.2};
	printf("이 주문에는 %2.2f 파운드의 %s가 있습니다.\n", apples.amount.weight, apples.name);
}	//공용체의 경우: 데이터형이 같으면 (float weight과 float volume), 둘 중 하나에만 값을 넣어도 동일한 값이 저장(?)되는 듯.
