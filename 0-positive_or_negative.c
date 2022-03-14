#include <stdio.h>
#include <time.h>
#include <string.h>


int main(void)
{
	int n;

	strand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n=0)
	{
		printf("%d\n", n, "is zero");
	}
	else if (n<0)
	{
		printf("%d\n", n, "is negative");
	}
	else{
		printf("%d\n", n, "is positive");
	}
	return(0);
}
