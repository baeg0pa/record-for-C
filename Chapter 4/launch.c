#include <stdio.h>
#include "launch.h"
#include "thruster.h"


int main()
{
	int x=0;
	x = launch();
	thruster(x);
}


int launch()
{
	int a;
	printf("속도는?: ");
	scanf("%d", &a);
	
	return a;
}
