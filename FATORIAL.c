#include<stdio.h>
#include<stdlib.h>

#define MAX 1000000

int main()
{
	char *dig;
	unsigned int calc=1;
	int i, n;
	int pot=0;
	char mult[4] = {2,4,8,6};
	
	dig = (char *) malloc(MAX*sizeof(char));
	dig[1] = 1;
	dig[2] = 2;
	
	for (i = 3; i <= MAX; i++)
	{
		n = i;
		
		while (!(n % 10))
			n /= 10;
		
		while (!(n%2))
		{
			pot++;
			n /= 2;
		}
		
		while (!(n%5))
		{
			pot--;
			n /= 5;
		}
		
		pot = (pot+32) % 4;
		
		n = n%10;
		calc *= n;
		calc = calc % 10;
		dig[i] = (calc*mult[pot]) % 10;
	} 
	
	for (i = 1; scanf("%d", &n) == 1; i++)
		printf("Instancia %d\n%d\n\n", i, (int) dig[n]);
	
	
	return 0;
}

