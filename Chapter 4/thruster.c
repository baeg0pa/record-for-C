#include "thruster.h"
#include <stdio.h>

void thruster(int y)
{
	int goal = 100;
	while(goal <= 100)
	{
		goal += y*1.5;
	}
	printf("도착했습니다.\n이동거리: %d", goal);
}
