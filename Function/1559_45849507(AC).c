#include <stdio.h>

int n, m;

long long int f(int x, int y){
	long long int a = (long long int)x;
	long long int b = (long long int)y;
	return a+b;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
