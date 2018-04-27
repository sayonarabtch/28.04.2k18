#include <stdio.h>

int bin_to_dec (char * pbin);


int main(int argc, const char * argv[]) {

	printf("%d\n", bin_to_dec("01001001"));
	
	return 0;
}


int bin_to_dec (char * pbin) {
    
	int a = 0;
	while (*pbin != '\0')
	{
		a = 2 * a + (*pbin++ - '0');
	}

	return a;
}