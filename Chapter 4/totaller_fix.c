#include <stdio.h>	//꺽쇠괄호 == 헤더파일이 라이브러리 코드가 있는 디렉터리에 있을 때
#include "totaller_fix.h"	//끈따옴표 == 헤더파일이 소스코드와 같은 디렉터리에 있을 때

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main() {
	float val;
	printf("항목 가격: ");
	while(scanf("%f", &val)==1) {
		printf("지금까지 합산: %.2f\n", add_with_tax(val));
		printf("항목 가격: ");
	}
	printf("\n총계: %.2f\n", total);
	printf("\n총 항목 수: %hi\n", count);
	return 0;
}

float add_with_tax(float f)
{
	float tax_rate = 1 + tax_percent/100.0;
	total += (f*tax_rate);
	count++;
	return total;
}
