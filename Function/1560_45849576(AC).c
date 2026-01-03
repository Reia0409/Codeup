#include <stdio.h>

long long int n, m;
long long int f(long long int x, long long int y){
	if(x>y){
		return x-y;
	}
	else return y-x;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
