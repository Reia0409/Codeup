#include <stdio.h>

int n;




long long int f(int x){
	long long int a=0;
	for(int i=0; i<=x; i++){
		a = a+i;
	}
	return a;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
