#include <stdio.h>

float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax(float f)
{
	float tax_rate = 1 + tax_percent/100.0;
	total += f*tax_rate;
	count++;
	return total;
}

int main() 
{
	float val;
	
	printf("항목가격: ");
	while(scanf("%f", &val)==1)
	{
		printf("지금까지 합산: %.2f\n", add_with_tax(val));
		printf("Price of item: ");
	}
	
	printf("\n총계: %.2f\n", total);
	printf("\n총 항목 수: %hi\n", count);
	
	return 0;
}
