# include <stdio.h>
int main (void)
{
	int n;
	while(scanf("%d", &n) == 1 && n!=0)
	{
		printf("f91(%d) = %d\n", n, f91(n));
	}
	return 0;
	
}
int f91(int n)
{
	if(n<=100)
	return f91(f91(n+11));
	
	return n-10;
}