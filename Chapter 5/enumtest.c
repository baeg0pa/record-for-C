#include <stdio.h>

typedef enum {
	COUNT, POUNDS, PINTS
} unit_of_measure;

typedef union {
	short count;
	float weight;
	float volume;
} quantity;

typedef struct {
	const char *name;
	const char *country;
	quantity amount;
	unit_of_measure units;
}fruit_order;

void display(fruit_order order)
{
	printf("이 주문에는 ");
	if (order.units == PINTS)
		printf("%2.2f파인트의 %s가 있습니다.\n", order.amount.volume, order.name);
	else if (order.units == POUNDS)
		printf("%2.2f파운드의 %s가 있습니다.\n", order.amount.weight, order.name);
	else
		printf("%i개의 %s가 있습니다.\n", order.amount.count, order.name);
}

int main()
{
	fruit_order apples = {"사과", "영국", .amount.count=144, COUNT};
	fruit_order strawberries = {"딸기", "스페인", .amount.weight=17.6, POUNDS};
	fruit_order oj = {"오렌지 주스", "미국", .amount.volume=10.5, PINTS};
	
	display(apples);
	display(strawberries);
	display(oj);
	return 0;
}
