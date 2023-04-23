#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int address = 10;
	printf("%p\n %", &address);
	write(1, &"%", 1);
	
}
