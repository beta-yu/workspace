#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 0;
	for(; i < argc; ++i)
	{
		printf("argv[%d]:	%s\n", i, argv[i]);
	}
	return 0;
}
