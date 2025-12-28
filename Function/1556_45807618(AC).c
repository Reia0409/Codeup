#include <stdio.h>

int n;




long long int f(int x){
	long long int a = 1;
	for(int i=1; i<=x; i++){
		a = a*i;
	}
	return a;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
