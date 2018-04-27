
#include <stdio.h>

int bits(int n);

int main(int argc, const char * argv[]) {
	
	int n;
	
	printf("ВВедите число ");
	scanf("%d", &n);
	printf("%d\n", n);
	
    printf("Количество бит в числе %d включено %d\n", n, bits(n));
	
	return 0;
}

int bits(int n)
{
	int bits = 0;
	int i = 0;
	while(i<16)
	{
		if((01&n) == 1) bits++;
		n>>=1;
		i++;
	}
	
	return bits;
} 