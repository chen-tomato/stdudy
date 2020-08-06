#include <stdio.h>
#include "add.h"
int main(int argc, const char *argv[])
{
	int num1=2,num2=7,sub;
	sub=add(num1,num2);
	printf("sub= %d\n",sub);
	return 0;
}
