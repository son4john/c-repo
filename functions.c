#include <stdio.h>
int main(){
	int mymlut();
	int retval;

	retval = mymlut(6,7);
	printf("Amswer: %d\n",retval);
}

int mymlut(a,b)
	int a,b;
{
	int c = a * b;
	return c;
}