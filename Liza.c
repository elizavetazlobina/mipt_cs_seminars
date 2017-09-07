#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d", &a);


	char chislo[32] = "";
	
	int k = 0;

	while(a){
		i = a % 2;
		chislo[k++] = i + '0';
		a /= 2;
	}

	for (;k + 1;k--)
		putchar(chislo[k]);

	return 0;
}

