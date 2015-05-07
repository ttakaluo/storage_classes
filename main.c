#include <stdio.h>

int gvalue = 100;

void f_static()
	{
		static int svalue = 100;
		printf("static var incremented = %d\n", svalue);
		svalue=svalue+100;
	}

int main(void){


	printf("Global var = %d\n", gvalue);

	gvalue = 150;

	printf("Global var = %d incremented\n", gvalue);

	f_static();
	f_static();
	f_static();
	return 0;
}
