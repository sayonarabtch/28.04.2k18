
#include <stdio.h>
int bac(int n, int numer);

int main(int argc, const char * argv[]) {
	
	int n, numer;
	
	printf("Введите номер");
	scanf("%d", &n);
	printf("Введите двоичное число");
	scanf("%d", &numer);
	
	printf("%d бит в числе %d равен %d\n", n, numer, bac(n, numer));
	
	return 0;
}

int bac(int n, int numer)
{
	int bac = 0;
	int i = 0;
	while(i<32)
	{
		if((01&n) == 1 && i == numer) bac = 1<<numer;
		n>>=1;
		i++;
	}
	
	return bac;
}
