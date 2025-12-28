#include <stdio.h>

long long int n;



long long int abs(long long int x){
	if (x<0){
		long long int a = x*(-1);
		return a;
	}
	else return x;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
